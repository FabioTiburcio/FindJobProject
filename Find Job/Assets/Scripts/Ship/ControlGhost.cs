using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Gaminho;

public class ControlGhost : MonoBehaviour
{
    #region Public

    public ControlGame controlGame;
    public GameObject Shield;
    public GameObject Explosion;
    public Shot[] Shots;
    #endregion

    #region Private
    private bool shooting = false;

    #endregion

    void Start()
    {
        if (GetComponent<Rigidbody2D>() == null)
        {
            Debug.LogError("Component required Rigidbody2D");
            Destroy(this);
            return;
        }
        GetComponent<Rigidbody2D>().gravityScale = 0.001f;

        StartCoroutine(Shoot());
    }

    void LateUpdate()
    {
        #region Tiro
        if (Input.GetKeyDown(KeyCode.LeftControl))
        {
            shooting = true;
        }
        if (Input.GetKeyUp(KeyCode.LeftControl))
        {
            shooting = false;
        }



        #endregion
    }

    private IEnumerator Shoot()
    {
        while (true)
        {
            yield return new WaitForSeconds(Shots[Statics.ShootingSelected].ShootingPeriod);
            if (shooting)
            {
                Statics.Damage = Shots[Statics.ShootingSelected].Damage;
                GameObject goShoot = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
                goShoot.transform.parent = transform;
                goShoot.transform.localPosition = Shots[Statics.ShootingSelected].Weapon.transform.localPosition;
                goShoot.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
                goShoot.AddComponent<BoxCollider2D>();
                goShoot.transform.parent = transform.parent;

                if (Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.DOUBLE)
                {
                    GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
                    goShoot2.transform.parent = transform;
                    goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
                    goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
                    goShoot2.AddComponent<BoxCollider2D>();
                    goShoot2.transform.parent = transform.parent;
                }

                if (Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.TRIPLE)
                {
                    GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
                    goShoot2.transform.parent = transform;
                    goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
                    goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
                    goShoot2.AddComponent<BoxCollider2D>();
                    goShoot2.transform.parent = transform.parent;

                    GameObject goTiro3 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
                    goTiro3.transform.parent = transform;
                    goTiro3.transform.localPosition = Shots[Statics.ShootingSelected].Weapon3.transform.localPosition;
                    goTiro3.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
                    goTiro3.AddComponent<BoxCollider2D>();
                    goTiro3.transform.parent = transform.parent;
                }
            }

            CallShield();
        }
    }

    private void CallShield()
    {
        if (Shield.activeSelf != Statics.WithShield)
        {
            Shield.SetActive(Statics.WithShield);
        }
    }
}
