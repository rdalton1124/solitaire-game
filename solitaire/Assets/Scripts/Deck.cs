using System.Collections;
using System.IO;
using System; 
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;


public class Deck : MonoBehaviour 
{
   // public Card tst; 
    public GameObject cardPrefab; 
    List<GameObject> cards = new List<GameObject>();
    List<GameObject> drewCards = new List<GameObject>(); 
    public Sprite bSprite;
    public Vector3 drawLocation;
    public GameObject drewObj;
    public GameObject tableu;
    private void Start()
    {

        Vector3 pos = this.transform.position;
        drawLocation.x = pos.x - 3;
        drawLocation.y = pos.y;
        drawLocation.z = pos.z;
        for (int i = 0; i < 52; i++)
        {
            GameObject temp2;

            temp2 = Instantiate(cardPrefab);

            var path = "../solitaire/Assets/Cards/"; 
            var path2 = "../solitaire/Assets/Test_Assets/cards/PNG/large/";
            string file = (i + 1).ToString() + ".png";
            temp2.name = (i + 1).ToString();
            temp2.transform.parent = GameObject.Find("Deck").transform;
            temp2.transform.position = temp2.transform.parent.position;
            temp2.GetComponent<Card>().setSuite((int)((i + 1) / 13) + 1);

            if ((i + 1) % 13 == 0)
                temp2.GetComponent<Card>().setValue(13);
            else
                temp2.GetComponent<Card>().setValue((i + 1) % 13);

            if (File.Exists(path + file))
            {
                byte[] bytes;
                bytes = File.ReadAllBytes(path + file);
                Texture2D txt1 = new Texture2D(2, 2);
                txt1.LoadImage(bytes);
                Sprite nw = Sprite.Create(txt1, new Rect(0, 0, txt1.width, txt1.height), new Vector2(.5f, .5f));
                
                nw.name = (i + 1).ToString();
                temp2.GetComponent<Card>().setFSprite(nw);
                cards.Add(temp2);
            }
            else
            {
                byte[] bytes;
                bytes = File.ReadAllBytes(path2 + file);
                Texture2D txt = new Texture2D(2, 2);
                txt.LoadImage(bytes);
                Sprite nw = Sprite.Create(txt, new Rect(0, 0, txt.width, txt.height), new Vector2(.5f, .5f));
                nw.name = (i + 1).ToString();
                temp2.GetComponent<Card>().setFSprite(nw);
                cards.Add(temp2);
            }
            //temp2.GetComponent<Card>().flip();
            //temp2 = Instantiate(new GameObject());

            // cards.Insert(i, temp2);
        }

    }
    public void deal()
    {
        shuffleTest();
        for(int i = 0; i < 7; i++)
        {

            for(int j = 0; j < i; j++)
            {
                tableu.transform.GetChild(i).GetComponent<column>().addCardFromDeal(cards.ElementAt(0).GetComponent<Card>());
                cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
                cards.RemoveAt(0);
            }
            tableu.transform.GetChild(i).GetComponent<column>().addCardFaceUp(cards.ElementAt(0).GetComponent<Card>());
            cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
            cards.RemoveAt(0);
            tableu.transform.GetChild(i).GetComponent<column>().printCards(); 
        }
        draw(); 
    }
    public void draw()
    {
        if(cards.Count > 0)
        { 
            cards.ElementAt(0).transform.position = drawLocation;
            cards.ElementAt(0).GetComponent<Card>().flip();

            if(drewCards.Count >= 1)
                drewCards.ElementAt(drewCards.Count - 1).GetComponent<Renderer>().enabled = false;

            drewCards.Add(cards.ElementAt(0));
            cards.RemoveAt(0);
        }
        else
        {
            for (int i = 0; i < 52; i++)
            {
                cards.Add(drewCards.ElementAt(i));
                cards.ElementAt(i).GetComponent<Renderer>().enabled = true; 
                cards.ElementAt(i).transform.position = new Vector3(drawLocation.x + 3, drawLocation.y, drawLocation.z); 
            }
            drewCards.Clear();
            flip(); 
        }
        GameManager.removeTempCard();
        Debug.Log("Size of drew cards " + drewCards.Count.ToString());
    }
    public void shuffleTest()
    {
        if(cards.Count == 52) { 
            int t0, t1;
         for (int i = 0; i < 100; i++)
         {
             t0 = UnityEngine.Random.Range(0, 51);
             t1 = UnityEngine.Random.Range(0, 51);
             if (t0 == t1)
                 cards.Reverse();
             else if (t0 < t1)
             {
                 cards.Reverse(t0, t1 - t0);
             }
             else
                 cards.Reverse(t1, t0 - t1);
           }
         cards.Reverse();
         //  printCards();
        }
    }
    public void printCards()
    {
        float x, y; 
        for (int i = 0; i < 52; i ++)
        {
            if (i < 12)
            {
                y = 4f;
                x = -8.35f + (1.5f * i);
            }
            else if (i < 24)
            { 
                y = 2f;
                x = -8.35f + (1.5f * (i - 12));
            }
            else if (i < 36)
            {
                y = 0f;
                x = -8.35f + (1.5f * (i - 24));
            }
            else if (i < 48)
            {
                y = -2f;
                x = -8.35f + (1.5f * (i - 36));
            }
            else
            {
                y = -4f;
                x = -8.35f + (1.5f * (i - 48));
            }
            cards.ElementAt(i).transform.position = new Vector3(x, y); 
        }
    }
    public Card getTopDrewCard()
    {
        Debug.Log("inside getTopDrewCard function \n");
        Debug.Log("size of drew cards " + drewCards.Count.ToString());
        return drewCards.ElementAt(drewCards.Count - 1).GetComponent<Card>(); 
    }
    public void flip()
    {
        foreach(GameObject c in cards)
        {
            c.GetComponent<Card>().flip();
        }
    }
    void randomCard()
    {
        int index = UnityEngine.Random.Range(0, 51);
        
    }
    private void OnMouseDown()
    {
        draw(); 
    }
    public void removeTopDrewCard()
    {
        drewCards.RemoveAt(drewCards.Count - 1);
    }
}
