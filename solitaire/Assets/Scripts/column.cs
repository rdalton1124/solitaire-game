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
        Debug.Log("ARDding " + cards.Count.ToString() + " cards");
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
        float z = 0;
        
        for (int i = 0; i < faceDown.Count; i++)
        {
            faceDown.ElementAt(i).transform.localPosition = new Vector3(x, y - (.15f * i), z);
         
            if (faceDown.ElementAt(i).FaceUp())
                faceDown.ElementAt(i).flip();
        }
        
        for (int i = 0; i < faceUp.Count; i ++)
        {
           // y -= .5f; 
            z--;
            faceUp.ElementAt(i).transform.localPosition = new Vector3(x, y - (.4f * i) - (.15f * (faceDown.Count - 1)), z); 
            if (!faceUp.ElementAt(i).FaceUp())
                faceUp.ElementAt(i).flip(); 
        }
        if (faceUp.Count > 0)
        {
            Vector3 pos2 = faceUp.ElementAt(faceUp.Count - 1).transform.localPosition;
            this.GetComponent<BoxCollider2D>().offset = pos2;
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
