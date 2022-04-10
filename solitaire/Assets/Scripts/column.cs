using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq; 
public class column : MonoBehaviour
{
    List<Card> faceDown = new List<Card>();
    List<Card> faceUp = new List<Card>();
    int col; 
    void Start()
    {
        for(int i = 0; i < 7; i++)
        {
            if (this.gameObject == GameObject.Find("runs").transform.GetChild(i))
                col = i; 
        }
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
        faceUp.TrimExcess();
        if(faceUp.Count == 0 && faceDown.Count > 0)
        {
            faceUp.Add(faceDown.ElementAt(faceDown.Count - 1));
            faceDown.RemoveAt(faceDown.Count - 1);
            printCards(); 
        }
    }
    public void removeTopCards(int numCards)
    {

        if (faceUp.Count > 0)
        {
            faceUp.RemoveRange(faceUp.Count - numCards, numCards);
            faceUp.TrimExcess();
            Debug.Log("FAce up cunt " + faceUp.Count.ToString());
            Debug.Log("face down cunt " + faceDown.Count.ToString());
            if (faceUp.Count == 0 && faceDown.Count > 0)
            {
                faceUp.Add(faceDown.ElementAt(faceDown.Count - 1));
                faceDown.RemoveAt(faceDown.Count - 1);
                printCards();
            }
        }
        printCards();
    }
    public void addCardFaceUp(Card card)
    {
        faceUp.Add(card);
        card.transform.parent = this.transform; 
        if (!card.FaceUp())
            card.flip();
    }
    public void addManyCards(List<Card> nCards)
    {
        for (int i = 0; i < nCards.Count; i++)
        {
            faceUp.Add(nCards.ElementAt(i)); 
        }
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
        Vector3 pos2 = faceUp.ElementAt(faceUp.Count - 1).transform.localPosition;
        this.GetComponent<BoxCollider2D>().offset = pos2;
    }
    
    private void OnMouseDown()
    {
        Debug.Log("column has been clicked");
        if (GameManager.areTempCardsSet() && GameManager.getTempCards().Count > 1)
        {
            Debug.Log("Temp cars are set and count > 1");
            if (faceUp.Count == 0)
            {
                if (GameManager.getTempCards().ElementAt(0).getValue() == 13)
                {
                    addManyCards(GameManager.getTempCards());
                    GameManager.moveTempCards(GameManager.getTempCards().Count);
                    printCards(); 
                }
            }
            else
            {
                int size = 0, bg = 0;
                for (int i = 0; i < GameManager.getTempCards().Count; i++)
                {
                    if (GameManager.getTempCards().ElementAt(i).canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
                    {
                        size = GameManager.getTempCards().Count - i - 1;
                        bg = i;
                    }
                }
                if (size != 0)
                {
                    addManyCards(GameManager.getTempCards().GetRange(bg, size));
                    GameManager.moveTempCards(size);
                    printCards(); 
        
                }
            }

        }
        else if (GameManager.isTempCardSet())
        {
            Debug.Log("Temp card is set"); 
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
                GameManager.setTempCard(faceUp.ElementAt(0));
            }
        }
        else
        {
            Debug.Log("Setting temp card(s)");
            GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1)); 
            GameManager.setTempCards(faceUp, col);
        }
     }
}
