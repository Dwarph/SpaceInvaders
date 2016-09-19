using UnityEngine;
using System;
using System.Collections;

public class FinishLineGameOver : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void OnTriggerEnter2D (Collider2D collision)
	{
		Debug.Log("collision name: " + collision.gameObject.name);
		if(collision.gameObject.name.StartsWith("Invader")){
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
