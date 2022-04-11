using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class drewCards : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject deck, gm; 
    void Start()
    {
        
    }

    private void OnMouseDown()
    {
        if (deck.GetComponent<Deck>().getNumDrewCards() > 0)
        {
            Card tmp = deck.GetComponent<Deck>().getTopDrewCard();
            if (tmp)
            {
                GameManager.setTempCard(tmp.gameObject);
            }
        }
    }
}
