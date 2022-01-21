using Gaminho;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ControlStart : MonoBehaviour {
    public Text Record;
	// Use this for initialization
	void Start () {
        //Reset the variables to start the game from scratch
        Statics.WithShield = false;
        Statics.EnemiesDead = 0;
        Statics.CurrentLevel = 0;
        Statics.Points = 0;
        Statics.ShootingSelected = 2;
        //Loads Record
        if (PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE) == 0)
        {
            PlayerPrefs.SetString(Statics.PLAYERPREF_NEWRECORD, "Nobody");
        }
        Record.text = "Record: " + PlayerPrefs.GetString(Statics.PLAYERPREF_NEWRECORD) + "(" + PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE) + ")";
       
	}

	public void StartClick()
    {
        GetComponent<AudioSource>().Stop();
        GameObject.Instantiate(Resources.Load(Statics.PREFAB_HISTORY) as GameObject);
        Statics.loadingGame = false;
    }

    public void ContinueClick()
    {
        GetComponent<AudioSource>().Stop();
        GameObject.Instantiate(Resources.Load(Statics.PREFAB_LOAD) as GameObject);
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(0.5f);
        CallScene callScene = GetComponent<CallScene>();
        callScene.Call("Game");
        Statics.loadingGame = true;
    }

    public void Quit()
    {
        Application.Quit();
    }

    
}
