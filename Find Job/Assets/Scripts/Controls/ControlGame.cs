using Gaminho;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlGame : MonoBehaviour {
    public ScenarioLimits ScenarioLimit;
    public Level[] Levels;
    public Image Background;
    [Header("UI")]
    public Text TextStart;
    public Text TextPoints;
    public Transform BarLife;

    // Use this for initialization
    void Start () {
        if (Statics.loadingGame)
        {
            LoadGame();
        }
        Statics.EnemiesDead = 0;
        Background.sprite = Levels[Statics.CurrentLevel].Background;
        TextStart.text = "Stage " + (Statics.CurrentLevel + 1);
        GetComponent<AudioSource>().PlayOneShot(Levels[Statics.CurrentLevel].AudioLvl);
        
    }

    private void Update()
    {
        TextPoints.text = Statics.Points.ToString();
        BarLife.localScale = new Vector3(Statics.Life / 10f, 1, 1);
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (GameObject.FindGameObjectWithTag("Pause") != null)
            {
                Time.timeScale = 1;
                GetComponent<AudioSource>().UnPause();
                Destroy(GameObject.FindGameObjectWithTag("Pause"));
            }
            else
            {
                Time.timeScale = 0;
                GameObject.Instantiate(Resources.Load(Statics.PREFAB_PAUSE) as GameObject);
                GetComponent<AudioSource>().Pause();
            }
            
        }
        
    }

    public void LevelPassed()
    {
        
        Clear();
        Statics.CurrentLevel++;
        Statics.Points += 1000 * Statics.CurrentLevel;
        if (Statics.CurrentLevel < 3)
        {
            GameObject.Instantiate(Resources.Load(Statics.PREFAB_LEVELUP) as GameObject);
        }
        else
        {
            GameObject.Instantiate(Resources.Load(Statics.PREFAB_CONGRATULATION) as GameObject);
        }
        SaveScore();
    }
    public void SaveGame()
    {
        SaveLoadData data = GetComponent<SaveLoadData>();
        data.playerData.level = Statics.CurrentLevel;
        data.SaveData();
    }
    //To save the score only when it pass a level
    public void SaveScore()
    {
        SaveLoadData data = GetComponent<SaveLoadData>();
        data.playerData.scoreOnLevel = Statics.Points;
        SaveGame();
    }
    public void LoadGame()
    {
        SaveLoadData data = GetComponent<SaveLoadData>();
        data.LoadData();
        Statics.CurrentLevel = data.playerData.level;
        Statics.Points = data.playerData.scoreOnLevel;
    }
    //Oops, when you lose (: Starts from Zero
    public void GameOver()
    {
        BarLife.localScale = new Vector3(0, 1, 1);
        Clear();
        Destroy(Statics.Player.gameObject);
        GameObject.Instantiate(Resources.Load(Statics.PREFAB_GAMEOVER) as GameObject);
        SaveGame();
    }
    private void Clear()
    {
        GetComponent<AudioSource>().Stop();
        GameObject[] Enemies = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject ini in Enemies)
        {
            Destroy(ini);
        }
    }
}
