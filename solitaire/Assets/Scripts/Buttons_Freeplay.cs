using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Buttons_Freeplay : MonoBehaviour
{
    public void backToMain()
    {
        SceneManager.LoadScene("Menu");
    }
}
