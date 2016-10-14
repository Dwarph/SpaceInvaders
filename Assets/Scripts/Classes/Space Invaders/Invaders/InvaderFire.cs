//This class handles invader's firing.
using UnityEngine;
using System;
using System.Collections;

public class InvaderFire : MonoBehaviour {
	FireLaser f;

	//need this to access the numberOfAliveInvaders
	private InvaderSetUp invSet;



	// Used for initialisation and starting randomFire()
	void Start () {
		f = gameObject.GetComponent("FireLaser") as FireLaser;
		invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
		StartCoroutine(randomFire());
	}

	//tells the invader to randomly fire every 0.5 seconds.
	//The rate of fire increases, depending on the number of invaders left
	IEnumerator randomFire(){

		while(true){

			if(UnityEngine.Random.Range( 0, invSet.getNoOfInvaders() ) == 0){
				f.fireLaser();
			}
		yield return new WaitForSeconds(0.5f);
		}
	}

	//called when the object is destroyed
	void OnDestroy(){
		InvaderSetUp invSet;
		try{
			//when an invader is destroyed, remove one from the total number of invaders
			invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
			invSet.setNoOfInvaders(-1);
		}catch(NullReferenceException ex){
			//used to avoid initial errors
		}
	}

}
