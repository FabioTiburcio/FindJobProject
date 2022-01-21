using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveLoadData : MonoBehaviour
{
    public PlayerData playerData = new PlayerData(0);

    private string path = "";
    private string persistentPath = "";
    // Start is called before the first frame update
    private void Start()
    {
        SetPaths();
    }

    public void SetPaths()
    {
        path = Application.dataPath + Path.AltDirectorySeparatorChar + "SaveData.json";

        persistentPath = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
    }

    public void SaveData()
    {
        SetPaths();
        string savePath = path;
        Debug.Log("Saving data at: " + savePath);
        string json = JsonUtility.ToJson(playerData);
        Debug.Log(json);
        using StreamWriter writer = new StreamWriter(savePath);
        writer.Write(json);
    }

    public void LoadData()
    {
        SetPaths();
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();
        playerData = JsonUtility.FromJson<PlayerData>(json);
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            LoadData();
        }
    }
}
