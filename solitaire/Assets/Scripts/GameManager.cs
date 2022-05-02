using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    static public  GameObject deck, foundation, tableau;
    public GameObject winner, btns, strt; 
    static Card tempCard;
    public Text scoreTxt, timeTxt;
    static List<Card> tempCards = new List<Card>(); 
    static bool cardSet = false;
    bool gameWon = false;
    int t = 0;
    int time; 
    int score;
    int finalTime; 
    void Start()
    {
        deck = GameObject.Find("Deck");
        foundation = GameObject.Find("foundation");
        tableau = GameObject.Find("runs");
        winner.SetActive(false);
        score = 0;
        scoreTxt.text = "Score: 0";
        timeTxt.gameObject.SetActive(false);
        t = 0; 
    }
    public void remove20Points()
    {
        if (score >= 20)
            score -= 20;
        else
            score = 0;

        scoreTxt.text = "Score: " + score.ToString(); 
    }
    public void add3Points()
    {
        score += 3;
        scoreTxt.text = "Score: " + score.ToString(); 
    }
    public void add5Points()
    {
        score += 5;
        scoreTxt.text = "Score: " + score.ToString(); 
    }
    public void add10Points()
    {
        score += 10;
        scoreTxt.text = "Score: " + score.ToString(); 
    }
    public void passThroughDeck()
    {
        if (score > 100)
            score -= 100;
        else
            score = 0;

        scoreTxt.text = "Score: " + score.ToString(); 
    }
    public void startLevel()
    {
      strt.SetActive(false);
      switch(SceneManager.GetActiveScene().name)
      {
          case "level1":
              deck.GetComponent<Deck>().deal(1031606578);
              break;
          case "level2":
              break;
          case "level3":
              break;
          case "level4":
              break;
          case "level5":
              break;
          default:
              break; 
      }
        score = 0;
        scoreTxt.text = "Score: " + score.ToString();
        time = 0;
        timeTxt.gameObject.SetActive(true); 
        timeTxt.text = "Time: " + time.ToString(); 
    }
    void deal()
    {
        deck.GetComponent<Deck>().deal(); 
    }
    void Update()
    {
        t++;
        if(t % 60 == 0)
        {
            time++;
            timeTxt.text = "Time: " + time.ToString(); 
        }
        if (t % 600 == 0)
        {
            if (score >= 2)
                score -= 2;
            else
                score = 0;

            scoreTxt.text = "Score: " + score.ToString();
            //t = 0;
        }
        bool b = true;
        for(int i = 0; i < 4; i ++)
        {
            if (foundation.transform.GetChild(i).GetComponent<foundation_stack>().getSize() != 13)
                b = false; 
        }
        if(b && !winner.activeSelf)
        {
            winner.SetActive(true);
            btns.SetActive(false);
            timeTxt.gameObject.SetActive(false);
            scoreTxt.gameObject.SetActive(false);
            finalTime = time;
            score += (int)700000 / finalTime;
            winner.transform.GetChild(0).gameObject.GetComponent<Text>().text = "\t\t You've won \nFinal Score: " + score.ToString() + "\n Final Time: " + finalTime.ToString();

        }
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
        removeTempCards(); 
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
