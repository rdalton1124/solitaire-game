using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void PlayGame ()
    {
        SceneManager.LoadScene("game_main");
    }
    public void playClassic()
    {
        SceneManager.LoadScene("game_free_play"); 
    }
    public void seeDirections()
    {
        SceneManager.LoadScene("directions"); 
    }
    public void backToMenu()
    {
        SceneManager.LoadScene("menu");
    }

    public void restartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void QuitGame ()
    {
        Debug.Log("QUIT!");
        Application.Quit();
    }
}
