using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class foundation_stack : MonoBehaviour
{
    public GameObject deck;
    List<GameObject> stack = new List<GameObject>();
    private void OnMouseDown()
    {
        if (GameManager.isTempCardSet())
        {
            AddCard(GameManager.getTempCard().gameObject);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    public int getSize()
    {
        return stack.Count;
    }
    void printCards()
    {
        if(stack.Count != 0)
        {
            Vector3 pos = this.transform.position;

            for (int i = 0; i < stack.Count - 1; i ++ )
            {
                stack.ElementAt(i).transform.position = pos;
                if (!stack.ElementAt(i).GetComponent<Card>().FaceUp())
                    stack.ElementAt(i).GetComponent<Card>().flip(); 
            }   
            pos.z = -1;
            stack.ElementAt(stack.Count - 1).transform.position = pos;
        }
    }
    void AddCard(GameObject card)
    {
        if (stack.Count == 0 && card.GetComponent<Card>().getValue() == 1)
        {
            GameManager.moveTempCard();
            stack.Add(card);
            stack.ElementAt(stack.Count - 1).transform.parent = this.transform;
        }
        else if (stack.Count >= 1 && card.GetComponent<Card>().canStackOnFoundation(stack.ElementAt(stack.Count - 1).GetComponent<Card>()))
        {
            stack.Add(card);
            GameManager.moveTempCard();
            stack.ElementAt(stack.Count - 1).transform.parent = this.transform;
        }

        if (stack.Count != 0)
        {
            stack.ElementAt(stack.Count - 1).transform.position = this.transform.position;
        }
        Debug.Log("Stack size = " + stack.Count.ToString());
        printCards(); 
    }
}
