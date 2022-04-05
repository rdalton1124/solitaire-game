using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
public class Card : MonoBehaviour
{
    public Sprite fSprite, bSprite; 
    public int value;
    enum suites {error, clubs, diamonds, hearts, spades};
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
    /*
    public Card(int suit, int value, Sprite fSprite)
    {
        suite = (suites) suit;
        this.value = value;
        this.fSprite = fSprite; 
    }
    public Card(Sprite fSprite, Sprite bSprite)
    {
        this.fSprite = fSprite;
        this.bSprite = bSprite;
    }
    */
    public void setFSprite(Sprite f)
    {
        fSprite = f;
    
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
    public void setValue(int v)
    {
        if (v >= 1 && v <= 13)
        {
            value = v; 
        }
    }
    public void setSuite(int s)
    {
        s++; 
        if(s >= 1 && s<= 4)
        {
            suite = (suites)s; 
        }
        else
        {
            suite = (suites)0; 
        }
    }
}
