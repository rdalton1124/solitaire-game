using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; 
public class Buttons_main_menu : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void mainMode()
    {
        SceneManager.LoadScene("game_main"); 
    }
    public void classicMode()
    {
        SceneManager.LoadScene("game_free_play"); 
    }
}
