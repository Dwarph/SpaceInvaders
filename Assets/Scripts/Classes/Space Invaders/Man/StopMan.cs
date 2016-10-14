//this makes sure that the man stops when hitting the wall.
using UnityEngine;
using System.Collections;

public class StopMan : MonoBehaviour {

	private PlayerMovement pm;
	private bool stopMove, left;

	// Use this for initialization
	void Start () {
		stopMove = false;
		pm = GameObject.Find("man").GetComponent("PlayerMovement") as PlayerMovement;
	}
	
	// Update is called once per frame
	void Update () {
		checkForInput();
	}

	void checkForInput(){
		if(pm.getMove() == false){
			if(gameObject.name == "Left Wall"){

				if(Input.GetKeyDown("d") && left == false){
					Debug.Log(gameObject.name + " d - set to true");
					pm.setMove(true);
				}
			} else if(gameObject.name == "Right Wall" && left == true){
				if(Input.GetKeyDown("a")){
					Debug.Log(gameObject.name + " a - set to true");
					pm.setMove(true);
				}
			}
		}


	}
	
	void OnTriggerEnter2D(Collider2D collision){

		if(collision.gameObject.name=="man"){
		//	Debug.Log(gameObject.name + " set to false");
			pm.setMove(false);


		}
	}

	void OnTriggerLeave2D(Collider2D collision){
		if(collision.gameObject.name=="man"){
			if(Input.GetKeyDown("a")){
				left = true;
			}else if(Input.GetKeyDown("d")){
				left = false;
			}
		}
	}



}
