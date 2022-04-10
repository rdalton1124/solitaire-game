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
    public void setFSprite(Sprite f)
    {
        fSprite = f;
       // fSprite.texture.Resize(64, 64);
    
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
    public bool equalsCard(Card other)
    {
        return (value == other.value) && (suite == other.suite); 
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
        Debug.Log("Checking if card can stack on run");
        if ((other.value == (value + 1)) && other.isRed() != isRed())
            return true;
        else
        {
            Debug.Log("Card cannot stack ");
            Debug.Log("Card's value " + value.ToString());
            Debug.Log("Card is red " + isRed().ToString());
            Debug.Log("Card's suite " + suite.ToString());
            Debug.Log("Other Card's value " + other.value.ToString());
            Debug.Log("Other cards's suite " + other.suite.ToString());
            Debug.Log("Other card is red " + other.isRed()); 
            return false;
        }
    }
    
    public int getValue()
    {
        return value; 
    }
    public bool canStackOnFoundation(Card other)
    {
        //if (value == 1)
        //  return true;

        if ((other.value == (value - 1)) && other.suite == suite)
            return true;

        else
        {
            Debug.Log("cannot stafck on foundation");
            Debug.Log("This card's suite " + suite.ToString());
            Debug.Log("this card's value  is = " + value.ToString());
            Debug.Log("other cards' suite i " + other.suite.ToString());
            Debug.Log("other cards' value is " + other.value.ToString()); 
            return false;
        }
    }
    public bool FaceUp()
    {
        return isFaceUp; 
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
