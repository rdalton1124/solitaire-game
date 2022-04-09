using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class foundation_stack : MonoBehaviour
{
    List<GameObject> stack = new List<GameObject>();
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void AddCard(GameObject card)
    {
        if(stack.Count == 0 && card.GetComponent<Card>().getValue() == 1)
        {
            stack.Add(card);
        }
        else if (card.GetComponent<Card>().canStackOnFoundation(stack.ElementAt(stack.Count - 1).GetComponent<Card>()))
        {
            stack.Add(card);
        }
    }
}
