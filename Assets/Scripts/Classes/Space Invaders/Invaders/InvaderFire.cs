using UnityEngine;
using System;
using System.Collections;

public class InvaderFire : MonoBehaviour {
	FireLaser f;

	//need this to access the numberOfAliveInvaders
	private InvaderSetUp invSet;



	// Use this for initialization
	void Start () {
		f = gameObject.GetComponent("FireLaser") as FireLaser;
		invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
		StartCoroutine(randomFire());
	}

	/*
	// Update is called once per frame
	void Update () {
		randomFire();
	}*/



	IEnumerator randomFire(){

		while(true){

			if(UnityEngine.Random.Range( 0, invSet.getNoOfInvaders() ) == 0){
				f.fireLaser();
			}
		yield return new WaitForSeconds(1);
		}
	}

	//called when the object is destroyed
	void OnDestroy(){
		InvaderSetUp invSet;
		try{
			invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
			invSet.setNoOfInvaders(-1);
		}catch(NullReferenceException ex){

		}
	}

}
