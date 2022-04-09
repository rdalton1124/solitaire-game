using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq; 
public class column : MonoBehaviour
{
    List<Card> run = new List<Card>(); 
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void addCardFromDeal(Card card)
    {
        run.Add(card); 
    }
    public void addCardFaceUp(Card card)
    {
        run.Add(card);
        run.ElementAt(run.Count - 1).flip();
    }
    public void printCards()
    {
        float y = 0; 
        for(int i = 0; i < run.Count; i++)
        {
            float x = run.ElementAt(i).transform.position.x;
            float z = 0f;
            run.ElementAt(i).transform.position = new Vector3(x, y, z); 
            y -= .1f; 
        }
        Vector3 pos = run.ElementAt(run.Count - 1).transform.position;
        pos.z = -1;
        run.ElementAt(run.Count - 1).transform.position = pos;
        pos.z = 0;
        this.GetComponent<BoxCollider2D>().transform.position = pos; 
    }
    private void OnMouseDown()
    {
        GameManager.setTempCard(run.ElementAt(run.Count - 1).gameObject); 
    }
}
