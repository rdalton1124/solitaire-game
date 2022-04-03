using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
public class Card : MonoBehaviour
{
    public Sprite fSprite, bSprite; 
    int value;
    enum suites { hearts, diamonds, clubs, spades};
    suites suite;
    bool isFaceUp;
    void Start()
    {
        gameObject.GetComponent<SpriteRenderer>().sprite = bSprite;
        isFaceUp = false; 
    }
    void Update()
    {

    }
    public Card(Sprite fSprite)
    {
        this.fSprite = fSprite; 
    }
    public Card(Sprite fSprite, Sprite bSprite)
    {
        this.fSprite = fSprite;
        this.bSprite = bSprite;
    }
    public void flip()
    {
        if(isFaceUp)
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = bSprite;
            isFaceUp = false; 
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = fSprite;
            isFaceUp = true; 
        }
    }
    public bool isRed()
    {
        if (suite == suites.hearts || suite == suites.diamonds)
            return true;
        else
            return false; 

    }
    public bool canStackOnRun(Card other)
    {
        if (other.value != value + 1)
            return false;
        else if (other.isRed() == isRed())
            return false;
        else
            return true; 
    }
    public bool canStackOnTableu(Card other)
    {
        if (value == 1)
            return true;

        else if ((other.value == (value - 1)) && other.suite == suite)
            return true;

        else
            return false;
    }
}
