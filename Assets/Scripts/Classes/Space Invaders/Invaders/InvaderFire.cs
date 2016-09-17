using UnityEngine;
using System.Collections;

public class InvaderFire : MonoBehaviour {
	FireLaser f;
	// Use this for initialization
	void Start () {
		f = gameObject.GetComponent("FireLaser") as FireLaser;
		InvokeRepeating ("randomFire", 1, 1);
	}

	/*
	// Update is called once per frame
	void Update () {
		randomFire();
	}*/



	void randomFire(){
		if(Random.Range( 0, 55 ) == 1){
			f.fireLaser();
		}
	}

	//called when the object is destroyed
	void OnDestroy(){
		InvaderSetUp invSet;
		invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
		invSet.setNoOfInvaders(-1);

	}

}
