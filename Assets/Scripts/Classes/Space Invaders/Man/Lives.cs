//handle's the man's lives
using UnityEngine;
using System.Collections;

public class Lives : MonoBehaviour {

	Damagable d;
	public UnityEngine.UI.Image[] lives;

	// Use this for initialization
	void Start () {
		d =  GetComponent("Damagable") as Damagable;
	}
	
	// Update is called once per frame
	void Update () {
		checkLives();
	}

	//depending on the amount of lives left, destroy the life shown for it
	private void checkLives(){
		switch(d.GetMaxHP()){
		case 2:
			Destroy(lives[2]);
			break;
		case 1:
			Destroy(lives[1]);
			break;
		case 0:
			Destroy(lives[0]);
			break;

		}
	}

	//when this is destroyed, destroy the final lives.
	void OnDestroy(){
		Destroy(lives[0]);

	}

}
