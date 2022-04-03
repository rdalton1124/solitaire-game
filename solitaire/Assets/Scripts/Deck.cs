using System.Collections;
using System.IO;
using System; 
using System.Collections.Generic;
using UnityEngine;


public class Deck : MonoBehaviour
{
    List<Card> cards;
    public Sprite bSprite;

    private void Start()
    {
        string [] dir = Directory.GetFiles("../solitaire/Assets/Test_Assets/cards/PNG/large");
        for(int i = 2; i < 57; i ++)
        {
            Console.WriteLine(dir[i]);
        }
    }
    void randomCard()
    { 
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
