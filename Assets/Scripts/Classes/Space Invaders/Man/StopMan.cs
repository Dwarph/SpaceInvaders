//this makes sure that the man stops when hitting the wall.
using UnityEngine;
using System.Collections;

public class StopMan : MonoBehaviour
{

	private PlayerMovement pm;
	private bool stopMove, hit, right;

	// Use this for initialization
	void Start ()
	{
		if (gameObject.name == "Right Wall"){
			right = true;
		}else{
			right = false;
		}
		stopMove = false;
		pm = GameObject.Find ("man").GetComponent ("PlayerMovement") as PlayerMovement;
	}
	
	// Update is called once per frame
	void Update ()
	{
		checkForInput ();
	}

	void checkForInput ()
	{
		if(right){
			rightWall();
		}else{
			leftWall();
		}
	}
	
	void OnTriggerEnter2D (Collider2D collision)
	{
		if (collision.gameObject.name == "man") {
				hit = true;
				pm.setMove(false);
		}
	}

	private void rightWall(){
		if(hit && Input.GetKeyDown (KeyCode.A)){
			pm.setMove (true);
			hit = false;
		}
	}

	private void leftWall(){
		if(hit && Input.GetKeyDown (KeyCode.D)){
			pm.setMove (true);
			hit = false;
		}
	}
	



}
