using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Gaminho;

public class Ghost : MonoBehaviour
{
    public float delayToFollow;
    public float recordFrequency;
    public Vector3 positionOffset;
    public List<Vector3> position;
    public List<Vector3> rotation;

    private float timer;
    private int lastPosition = 0;
    private Vector3 initialPos;
    private Vector3 initialRot;


    private void Start()
    {
        position.Clear();
        rotation.Clear();
        initialPos = transform.position;
        initialRot = transform.eulerAngles;
        position.Add(initialPos);
        rotation.Add(initialRot);
        StartCoroutine(RecordPosition());
        StartCoroutine(Follow());
    }

    IEnumerator RecordPosition()
    {
        while (true)
        {
            yield return new WaitForSeconds(recordFrequency);
            position.Add(Statics.Player.position);
            rotation.Add(Statics.Player.eulerAngles);
            if (position.Count > 50)
            {
                position.RemoveAt(0);
                rotation.RemoveAt(0);
                lastPosition--;
            }
        }
    }

    IEnumerator Follow()
    {
        while (true)
        {
            yield return new WaitForSeconds(delayToFollow);
            lastPosition++;
            if(position.Count - lastPosition > 10)
            {
                delayToFollow = 0.08f;
            }
            else if(position.Count-lastPosition < 5)
            {
                delayToFollow = 0.12f;
            }
            gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, position[lastPosition]+positionOffset, 60);
            gameObject.transform.eulerAngles = Vector3.Lerp(gameObject.transform.position, rotation[lastPosition], 60);

        }
    }
}
