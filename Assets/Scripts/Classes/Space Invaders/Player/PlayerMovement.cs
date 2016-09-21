using UnityEngine;
using System.Collections;

//this class controls the player's movement
public class PlayerMovement : MonoBehaviour
{

	//editable move speed
	public float move_speed;
	private bool move;

	// Use this for initialization
	void Start ()
	{
		Debug.Log("initial transform: "  + transform.position.x +", "+ transform.position.y);
		move = true;
	}
	
	// Update is called once per frame
	void Update ()
	{
	
		checkForInput ();

	}

	//check for appropriate player input
	void checkForInput ()
	{
	if(move){
			if (Input.GetKey ("a")) {
				movePlayer (-move_speed, true);
			}
			if (Input.GetKey ("d")) {
				movePlayer (move_speed, true);
			}
		}
	}

	//this method moves the player using transform
	//I could use physics to push the player but simply transforming it in one direction feels snappier.
	//it takes the amount we want to move by
	public void movePlayer (float xMove, bool xAxis)
	{
		Vector3 tempPos = transform.position; 
		if (xAxis) {
			tempPos.x = tempPos.x + xMove;
		} else {
			tempPos.y = tempPos.y + xMove;
		}
		this.transform.position = tempPos;
	}

	public void setMove(bool newMove){
		move = newMove;
	}

	public bool getMove(){
		return move;
	}
	
}
