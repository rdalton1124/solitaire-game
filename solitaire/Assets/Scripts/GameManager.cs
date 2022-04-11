using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq; 
public class GameManager : MonoBehaviour
{
    static public  GameObject deck, foundation, tableau; 
    static Card tempCard;
    static List<Card> tempCards = new List<Card>(); 
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
        return tempCards.Count > 0;
    }
    public static void setTempCard(GameObject otherCard)
    {
        Debug.Log("Temp card set ");
        removeTempCards();
        tempCard = otherCard.GetComponent<Card>();
        cardSet = true;
    }
    public static void setTempCards(List<Card> nCards)
    {
        removeTempCards();
        for (int i = 0; i < nCards.Count; i++)
        {
            tempCards.Add(nCards.ElementAt(i));
        }
    }
    public static void moveTempCards(int numCards)
    {
        tempCards.ElementAt(0).transform.parent.GetComponent<column>().removeTopCards(numCards);

    }
    public static void moveTempCard()
    {
        Debug.Log("move temp card "); 
        if(deck.GetComponent<Deck>().getNumDrewCards() > 0 && deck.GetComponent<Deck>().getTopDrewCard().equalsCard(tempCard))
        {
            Debug.Log("Card is a from deck");
            deck.GetComponent<Deck>().removeTopDrewCard();

        }
        //if card is from the foundation 
        else if(tempCard.transform.parent.parent == foundation)
        {
            removeTempCard();
        }
        //if parent is a column 
        else if(tempCard.gameObject.transform.parent.GetComponent<column>())
        {
            Debug.Log("card is from tableau"); 
            tempCard.transform.parent.GetComponent<column>().removeTopCards(1);
        }
        removeTempCard(); 
    }
    public static void removeTempCard()
    {
        cardSet = false;
    }
    public static void removeTempCards()
    {
        tempCards.Clear();
        tempCards.TrimExcess(); 
    }
}
