using UnityEngine;
using System.Collections;

public class StopMan : MonoBehaviour {

	private PlayerMovement pm;
	private bool stopMove;

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

				if(Input.GetKeyDown("d")){
					pm.setMove(true);
				}
			} else if(gameObject.name == "Right Wall"){
				if(Input.GetKeyDown("a")){
					pm.setMove(true);
				}
			}
			Debug.Log("stopMove = false;");

		}


	}
	
	void OnTriggerEnter2D(Collider2D collision){

		if(collision.gameObject.name=="man"){
			pm.setMove(false);

		}
	}


}
