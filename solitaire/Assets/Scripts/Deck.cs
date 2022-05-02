using System.Collections;
using System.IO;
using System; 
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

public class Deck : MonoBehaviour 
{
   // public Card tst; 
    public GameObject cardPrefab;
    public GameObject gm; 
    public List<GameObject> cards = new List<GameObject>();
    public List<GameObject> drewCards = new List<GameObject>(); 
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

            if (i >= 0 && i <= 12)
                temp2.GetComponent<Card>().setSuite(1);
            else if (i >= 13 && i <= 25)
                temp2.GetComponent<Card>().setSuite(2);
            else if (i >= 26 && i <= 38)
                temp2.GetComponent<Card>().setSuite(3);
            else if (i <= 51)
                temp2.GetComponent<Card>().setSuite(4);
            else
                temp2.GetComponent<Card>().setSuite(0); 


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
           
        }

    }
    public bool contains(Card other)
    {
        bool b = false; 
        for(int i = 0; i < drewCards.Count; i ++)
        {
            if (other.equalsCard(drewCards.ElementAt(i).GetComponent<Card>()))
                b = true; 
        }
        return b; 
    }
    public void deal()
    {
        shuffle(); 
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
        }
        for(int i = 0; i < 7; i++)
        {
            tableu.transform.GetChild(i).GetComponent<column>().printCards(); 
        }
        draw(); 
    }
    public void deal(int sdd)
    {
        shuffle(sdd);
        for (int i = 0; i < 7; i++)
        {

            for (int j = 0; j < i; j++)
            {
                tableu.transform.GetChild(i).GetComponent<column>().addCardFromDeal(cards.ElementAt(0).GetComponent<Card>());
                cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
                cards.RemoveAt(0);
            }
            tableu.transform.GetChild(i).GetComponent<column>().addCardFaceUp(cards.ElementAt(0).GetComponent<Card>());
            cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
            cards.RemoveAt(0);
        }
        for (int i = 0; i < 7; i++)
        {
            tableu.transform.GetChild(i).GetComponent<column>().printCards();
        }
        draw();
    }
    public void draw()
    {
        if(cards.Count > 0)
        {
            float y = transform.position.y;
            float z = transform.position.z;
            if(!cards.ElementAt(0).GetComponent<Card>().FaceUp())
                cards.ElementAt(0).GetComponent<Card>().flip();

            cards.ElementAt(0).transform.position = drewObj.transform.position; 
            if(drewCards.Count >= 1)
                drewCards.ElementAt(drewCards.Count - 1).GetComponent<Renderer>().enabled = false;

            drewCards.Add(cards.ElementAt(0));
            cards.RemoveAt(0);
        }
        else
        {
            gm.GetComponent<GameManager>().passThroughDeck(); 
            for (int i = 0; i < drewCards.Count; i++)
            {
                cards.Add(drewCards.ElementAt(i));
                cards.ElementAt(i).GetComponent<Renderer>().enabled = true; 
                cards.ElementAt(i).transform.position = new Vector3(drawLocation.x + 3, drawLocation.y, drawLocation.z);
                if (cards.ElementAt(i).GetComponent<Card>().FaceUp())
                    cards.ElementAt(i).GetComponent<Card>().flip(); 
            }
            drewCards.Clear();
            drewCards.TrimExcess();
        }
        GameManager.removeTempCard();
        GameManager.removeTempCards(); 
        Debug.Log("Size of drew cards " + drewCards.Count.ToString());
    }
    public void shuffle()
    {   //
        Debug.Log("init state =  " + UnityEngine.Random.seed.ToString()); 
        if (cards.Count == 52) { 
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
        }
    }
    public void shuffle(int seed)
    {
        UnityEngine.Random.seed = seed;
        if (cards.Count == 52)
        {
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
    public int getNumDrewCards()
    {
        return drewCards.Count; 
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
        if (drewCards.Count > 0)
            drewCards.ElementAt(drewCards.Count - 1).GetComponent<Renderer>().enabled = true;
    }
}
