using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    static public GameObject deck, foundation, tableau;
    static Card tempCard;
    static List<Card> tempCards = new List<Card>();
    static bool cardSet = false;
    static int colNum; 
    void Start()
    {
        deck = GameObject.Find("Deck");
        foundation = GameObject.Find("foundation");
        tableau = GameObject.Find("runs");
    }
    public static Card getTempCard()
    {
        return tempCard;
    }
    public static List<Card> getTempCards()
    {
        return tempCards; 
    }
    public static bool isTempCardSet()
    {
        return cardSet;
    }
    public static bool areTempCardsSet()
    {
        return (tempCards.Count > 0);
    }
    public static void setTempCard(Card otherCard)
    {
        Debug.Log("Temp card set ");
        tempCard = otherCard;
        cardSet = true;
    }
    public static void setTempCards(List<Card> nCards, int sender)
    {
        colNum = sender; 
        removeTempCards();
        tempCards = nCards;
    }
    public static void moveTempCard()
    {
        Debug.Log("move temp card ");
        if (deck.GetComponent<Deck>().getTopDrewCard().equalsCard(tempCard))
        {
            Debug.Log("Card is a from deck");
            deck.GetComponent<Deck>().removeTopDrewCard();
            removeTempCard(); 
        }
        else if (tempCard.transform.parent.parent == foundation)
        {
            removeTempCard();
        }
        else if (tempCard.gameObject.transform.parent.GetComponent<column>())
        {
            Debug.Log("card is from tableau");
            tempCard.transform.parent.GetComponent<column>().removeTopCards(1);
            removeTempCard(); 
        }
        // removeTempCard(); 
    }
    public static void moveTempCards(int size)
    {
        if (size == 1)
            GameObject.Find("run").transform.GetChild(colNum).GetComponent<column>().removeTopCards(); 
        else
            GameObject.Find("runs").transform.GetChild(colNum).GetComponent<column>().removeTopCards(size); 
    }
    public static void removeTempCard()
    {
        Debug.Log("temp card removed");
        cardSet = false;
    }
    public static void removeTempCards()
    {
        tempCards.Clear();
        tempCards.TrimExcess();
    }
}
