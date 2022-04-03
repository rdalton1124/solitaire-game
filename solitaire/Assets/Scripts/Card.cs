using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Card : MonoBehaviour
{
    int value;
    enum suites { hearts, diamonds, clubs, spades};
    suites suite; 
    void Start()
    {

    }
    void Update()
    {

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
