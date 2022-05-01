using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq; 
public class column : MonoBehaviour
{
    List<Card> faceDown = new List<Card>();
    List<Card> faceUp = new List<Card>(); 
    void Start()
    {
  
    }
    public bool contains(Card card)
    {
        bool b = false;
        for (int i = 0; i < faceUp.Count - 1; i++)
        {
            if (card.equalsCard(faceUp.ElementAt(i)))
                b = true;
        }
        return b; 
    }
    public void addCardFromDeal(Card card)
    {
        faceDown.Add(card);
        card.transform.parent = this.transform;
        if (card.FaceUp())
            card.flip();
    }
    public void removeTopCards()
    {
        faceUp.RemoveAt(faceUp.Count - 1); 
        if (faceDown.Count > 0 && faceUp.Count == 0)
        {
            addCardFaceUp(faceDown.ElementAt(faceDown.Count - 1));
            faceDown.RemoveAt(faceDown.Count - 1);
            faceUp.ElementAt(0).transform.position = new Vector3(faceUp.ElementAt(0).transform.position.x, faceUp.ElementAt(0).transform.position.y, -1);
            printCards(); 
        }
    }
    public void removeTopCards(int numCards)
    {
        if(numCards <= faceUp.Count)
        {

            faceUp.RemoveRange(faceUp.Count - numCards, numCards);
            if(faceDown.Count > 0 && faceUp.Count == 0)
            {
                addCardFaceUp(faceDown.ElementAt(faceDown.Count - 1));
                faceDown.RemoveAt(faceDown.Count - 1);
                faceUp.ElementAt(0).transform.position = new Vector3(faceUp.ElementAt(0).transform.position.x, faceUp.ElementAt(0).transform.position.y, -1);
                printCards();
            }
        }
    }
    public void addCardFaceUp(Card card)
    {
        faceUp.Add(card);
        card.transform.parent = this.transform; 
        if (!card.FaceUp())
            card.flip();
    }
    public void addManyCards(List<Card> cards)
    {
        Debug.Log("Addding " + cards.Count.ToString() + " cards");
        for(int i = 0; i < cards.Count; i ++)
        {
            addCardFaceUp(cards.ElementAt(i));
            Debug.Log("adding card"); 
        }
        printCards();
    }
    public void printCards()
    {
        float x = 0;
        float y = 0;
        float z = faceDown.Count; 
        
        for (int i = 0; i < faceDown.Count; i++)
        {
            faceDown.ElementAt(i).transform.localPosition = new Vector3(x, y - (.25f * i), z);
         
            if (faceDown.ElementAt(i).FaceUp())
                faceDown.ElementAt(i).flip();

            z--; 
        }
        
        for (int i = 0; i < faceUp.Count; i ++)
        {
           // y -= .5f; e
            z--;
            faceUp.ElementAt(i).transform.localPosition = new Vector3(x, y - (.4f * i) - (.25f * (faceDown.Count)), z); 
            if (!faceUp.ElementAt(i).FaceUp())
                faceUp.ElementAt(i).flip(); 
        }
        if (faceUp.Count > 0)
        {
            Vector3 offset = new Vector3(0, 0, 0);
            if (faceUp.Count % 2 == 0)
            {
                float off1, off2;
                off1 = faceUp.ElementAt((int)faceUp.Count / 2).transform.localPosition.y;
                off2 = faceUp.ElementAt((int)(faceUp.Count / 2) - 1).transform.localPosition.y; 
                offset.y = (off1 + off2) / 2;
             //   offset.y -= .5f; 
            }
            else
            {
                offset = faceUp.ElementAt((int)Mathf.Floor(faceUp.Count / 2)).transform.localPosition;
            }
            this.GetComponent<BoxCollider2D>().offset = offset;
            GetComponent<BoxCollider2D>().size  = new Vector2(1.5f, 2 + (.5f * (faceUp.Count - 1))); 
        }
        else
        {
            this.GetComponent<BoxCollider2D>().offset = Vector3.zero;
        }
    }
    
    private void OnMouseDown()
    {
        if(GameManager.areTempCardsSet())
        {
            if(faceUp.Count == 0)
            {
                if (GameManager.getTempCards().ElementAt(0).getValue() == 13)
                {
                    GameManager.moveTempCards(GameManager.getTempCards().Count);
                    addManyCards(GameManager.getTempCards());
                    GameManager.removeTempCard();
                    GameManager.removeTempCards();
                }
            }
            else
            {
                int stackable = -1;
                for (int i = 0; i < GameManager.getTempCards().Count; i++)
                {
                    if (GameManager.getTempCards().ElementAt(i).canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
                    {
                        stackable = i;
                    }
                }
                //Debug.Log("Stackable = " + stackable.ToString());
                if (stackable >= 0)
                {
                    GameManager.moveTempCards(GameManager.getTempCards().Count - stackable);
                    addManyCards(GameManager.getTempCards().GetRange(stackable, GameManager.getTempCards().Count - stackable));
                    GameManager.removeTempCard();
                    GameManager.removeTempCards();
                }

                else
                {
                    GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
                    GameManager.setTempCards(faceUp);
                }
            }
            printCards();
        }
        else if (GameManager.isTempCardSet())
        {
            if (faceUp.Count == 0)
            {
                if (GameManager.getTempCard().getValue() == 13)
                {
                    GameManager.moveTempCard();
                    addCardFaceUp(GameManager.getTempCard());
                    printCards();
                }
            }
            else if (GameManager.getTempCard().canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
            {

                GameManager.moveTempCard();
                addCardFaceUp(GameManager.getTempCard());
                printCards();
            }
            else
            {
                GameManager.setTempCards(faceUp);
                GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
            }
        }
        else
        {
             GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
            GameManager.setTempCards(faceUp);
        }
    }
}
