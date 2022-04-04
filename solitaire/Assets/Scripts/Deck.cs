using System.Collections;
using System.IO;
using System; 
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class Deck : MonoBehaviour
{
    public Card tst; 
    public GameObject cardPrefab; 
    List<GameObject> cards;
    public Sprite bSprite;

    private void Start()
    {
        string name;
        List<string> dir = Directory.GetFiles("../solitaire/Assets/Test_Assets/cards/PNG/large").Where(file=>file.EndsWith("png")).ToList<String>();
       // List<string> fileNames = new List<String>();

         foreach(string s in dir)
        {
            Debug.Log(s + "\n");
        }

        for (int i = 0; i < 52; i ++)
        {
            Texture2D txt; 
            
            GameObject temp2 = Instantiate(cardPrefab);
            string path = "../solitaire/Assets/Test_Assets/cards/PNG/large/" + (i + 1).ToString() + ".png";
            temp2.name = (i + 1).ToString();
            temp2.transform.parent = GameObject.Find("Deck").transform;
            temp2.GetComponent<Card>().setSuite((int)(i + 1) / 4);

            if ((i + 1) % 13 == 0)
                temp2.GetComponent<Card>().setValue(13);
            else
                temp2.GetComponent<Card>().setValue((i + 1) % 13);

            if (File.Exists(path))
            {
                byte[] bytes;
                bytes = File.ReadAllBytes(path);
                Texture2D txt1 = new Texture2D(2, 2);
                txt1.LoadImage(bytes);
                temp2.GetComponent<Card>().setFSprite(Sprite.Create(txt1, new Rect(0, 0, txt1.width, txt1.height), new Vector2(0f, 0f)));
                cards.Insert(i, temp2); 
            }
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
