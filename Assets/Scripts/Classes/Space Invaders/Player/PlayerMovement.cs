using UnityEngine;
using System.Collections;

//this class controls the player's movement
public class PlayerMovement : MonoBehaviour
{

	//editable move speed
	public float move_speed;

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
		checkForInput ();

	}

	//check for appropriate player input
	void checkForInput ()
	{
	
		//if d is pressed, move right
		if (Input.GetKey ("w")) {
			movePlayer (move_speed, false);
			//otherwise, if a is pressed, move left
		}
		if (Input.GetKey ("a")) {
			movePlayer (-move_speed, true);
		}
		if (Input.GetKey ("s")) {
			movePlayer (-move_speed, false);
		}
		if (Input.GetKey ("d")) {
			movePlayer (move_speed, true);
		}
	}

	//this method moves the player using transform
	//I could use physics to push the player but simply transforming it in one direction feels snappier.
	//it takes the amount we want to move by
	void movePlayer (float xMove, bool xAxis)
	{
		Vector3 tempPos = transform.position; 
		if (xAxis) {
			tempPos.x = tempPos.x + xMove;
		} else {
			tempPos.y = tempPos.y + xMove;
		}
		this.transform.position = tempPos;
	}
	
}
