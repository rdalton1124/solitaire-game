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
        faceUp.Clear();
        faceUp.TrimExcess();
        if (faceDown.Count > 0)
        {
            addCardFaceUp(faceDown.ElementAt(faceDown.Count - 1));
            faceDown.RemoveAt(faceDown.Count - 1);
            faceUp.ElementAt(0).transform.position = new Vector3(faceUp.ElementAt(0).transform.position.x, faceUp.ElementAt(0).transform.position.y, -1);
            printCards(); 
        }
    }
    public void addCardFaceUp(Card card)
    {
        faceUp.Add(card);
        card.transform.parent = this.transform; 
        if (!card.FaceUp())
            card.flip();
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
        if (GameManager.isTempCardSet())
        {
            Debug.Log("card has been set"); 
            if(GameManager.getTempCard().canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
            {
                
                GameManager.moveTempCard();
                addCardFaceUp(GameManager.getTempCard());
                printCards(); 
            }
            else
            {
                GameManager.setTempCard(faceUp.ElementAt(0).gameObject); 
            }
        }
        else
          GameManager.setTempCard(faceUp.ElementAt(0).gameObject); 
    }
}
