using System.Collections;
using System.IO;
using System; 
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class Deck : MonoBehaviour
{
   // public Card tst; 
    public GameObject cardPrefab; 
    List<GameObject> cards = new List<GameObject>();
    public Sprite bSprite;

    private void Start()
    {
     
        //  string name;
        //       List<string> dir = Directory.GetFiles("../solitaire/Assets/Test_Assets/cards/PNG/large").Where(file=>file.EndsWith("png")).ToList<String>();

        //     foreach(string s in dir)
        //   {
        //     Debug.Log(s + "\n");
        //}

        for (int i = 0; i < 52; i++)
        {
            GameObject temp2;

            temp2 = Instantiate(cardPrefab);

            var path = "../solitaire/Assets/Test_Assets/cards/PNG/large/";
            string file = (i + 1).ToString() + ".png";
            float x, y;
            temp2.name = (i + 1).ToString();
            temp2.transform.parent = GameObject.Find("Deck").transform;
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
            temp2.transform.position = new Vector3(x, y, 0);
            temp2.GetComponent<Card>().setSuite((int)(i + 1) / 4);

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
               cards.Insert(i, temp2);
            }
            //temp2.GetComponent<Card>().flip();
            //temp2 = Instantiate(new GameObject());

            // cards.Insert(i, temp2);
        }

    }
    public void shuffleTest()
    {
        int t0, t1;
        for (int i = 0; i < 100; i ++)
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
        printCards();
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
    // Update is called once per frame
    void Update()
    {
        
    }
}
