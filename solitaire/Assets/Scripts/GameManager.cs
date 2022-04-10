using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    static public  GameObject deck, foundation, tableau; 
    static Card tempCard;
    static bool cardSet = false;
    void Start()
    {
        deck = GameObject.Find("Deck");
        foundation = GameObject.Find("foundation");
        tableau = GameObject.Find("runs");
    }

    // Update is called once per frame
    void Update()
    {

    }
    public static Card getTempCard()
    {
        return tempCard;
    }
    public static bool isTempCardSet()
    {
        return cardSet;
    }
    public static void setTempCard(GameObject otherCard)
    {
        Debug.Log("Temp card set ");
        tempCard = otherCard.GetComponent<Card>();
        cardSet = true;
    }
    public static void moveTempCard()
    {
        Debug.Log("move temp card "); 
        if(deck.GetComponent<Deck>().getTopDrewCard().equalsCard(tempCard))
        {
            Debug.Log("Card is a from deck");
            deck.GetComponent<Deck>().removeTopDrewCard();

        }
        else if(tempCard.transform.parent.parent == foundation)
        {
            removeTempCard();
        }
        else if(tempCard.gameObject.transform.parent.GetComponent<column>())
        {
            Debug.Log("card is from tableau"); 
            tempCard.transform.parent.GetComponent<column>().removeTopCards();
        }
       // removeTempCard(); 
    }
    public static void removeTempCard()
    {
        Debug.Log("temp card removed"); 
        cardSet = false;
    }
}
