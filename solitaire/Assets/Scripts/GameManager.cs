using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameObject deck, foundation, tableau; 
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

        if(tempCard.transform.parent == deck)
        {
            Debug.Log("Card is a from deck");
            deck.GetComponent<Deck>().removeTopDrewCard();

        }
        else if(tempCard.transform.parent.parent == foundation)
        {

        }
        else
        {
            tempCard.transform.parent.GetComponent<column>().removeTopCards(); 
        }
    }
    public static void removeTempCard()
    {
        Debug.Log("card removed"); 
        cardSet = false;
    }
}
