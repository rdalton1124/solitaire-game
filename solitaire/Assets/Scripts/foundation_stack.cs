using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class foundation_stack : MonoBehaviour
{
    public GameObject deck;
    List<GameObject> stack = new List<GameObject>();
    void Start()
    {
        
    }
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
    void AddCard(GameObject card)
    {
        if(stack.Count == 0 && card.GetComponent<Card>().getValue() == 1)
        {
            GameManager.moveTempCard();
            stack.Add(card);
        }
        else if (card.GetComponent<Card>().canStackOnFoundation(stack.ElementAt(stack.Count - 1).GetComponent<Card>()))
        {
            stack.Add(card);
            GameManager.moveTempCard();
        }

        if (stack.Count != 0)
        {
            stack.ElementAt(stack.Count - 1).transform.position = this.transform.position;
            stack.ElementAt(stack.Count - 1).GetComponent<Renderer>().enabled = true;
            if (stack.Count >= 2)
                stack.ElementAt(stack.Count - 2).GetComponent<Renderer>().enabled = false;
        }
        Debug.Log("Stack size = " + stack.Count.ToString());
    }
}
