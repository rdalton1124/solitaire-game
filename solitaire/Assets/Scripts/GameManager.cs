using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameObject deck; 
    static Card tempCard;
    static bool cardSet = false;
    void Start()
    {
        
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
        Card tmp = deck.GetComponent<Deck>().getTopDrewCard();
        if (tempCard.equalsCard(tmp))
        {
            deck.GetComponent<Deck>().removeTopDrewCard(); 
        }
    }
    public static void removeTempCard()
    {
        Debug.Log("card removed"); 
        cardSet = false;
    }
}
