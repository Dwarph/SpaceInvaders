//triggers a gameover if the invaders cross their finish line
using UnityEngine;
using System;
using System.Collections;

public class FinishLineGameOver : MonoBehaviour {


	private void OnTriggerEnter2D (Collider2D collision)
	{
		Debug.Log("collision name: " + collision.gameObject.name);
		//if an invader touches the finish line
		if(collision.gameObject.name.StartsWith("Invader")){
			//destroy all invaders
			Debug.Log("DESTROY_ALL_INVADERS");
			InvaderSetUp invSet;
			try{
				invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
				invSet.setNoOfInvaders(-(invSet.getNoOfInvaders()));
				invSet.destroyAllInvaders(true, false);
				Debug.Log(invSet.getNoOfInvaders());
			}catch(NullReferenceException ex){
				
			}
		}
	}
}
