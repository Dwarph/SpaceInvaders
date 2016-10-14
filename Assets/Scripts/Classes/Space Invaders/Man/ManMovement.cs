//this class is mainly for making the man move without any input
//it is used in invader and not Space Invaders
using UnityEngine;
using System.Collections;

public class ManMovement : MonoBehaviour {

	//unsophisticated movement - could be improved upon to dodge lasers
	//currently moves on the x axis until it reaches the last column on invaders

	bool movingLeft;
	GameObject maxLeftInvader, maxRightInvader;
	InvaderMovement invMove;

	// Use this for initialization
	void Start () {
		invMove = GameObject.Find("Space Invader Start").GetComponent("InvaderMovement") as InvaderMovement;
		movingLeft = true;
	}
	
	// Update is called once per frame
	void Update () {
		//gets the max left and right invaders
		maxLeftInvader = invMove.getMaxLeftInvader();
		maxRightInvader = invMove.getMaxRightInvader();

		//if they both still exist, mvoe
		if(maxLeftInvader != null && maxRightInvader != null){
			movement();
		}
	}

	//handles changing direction
	private void movement(){
		//if the man has reached the max invader on the left or right, change direction
		if(movingLeft){
			if (transform.position.x < maxLeftInvader.transform.position.x){
				movingLeft = false;
			}
		} else{
			if (transform.position.x > maxRightInvader.transform.position.x){
				movingLeft = true;
			}
		}
		//otherwise, continue to move in that direction
		move();
	}

	//moves the man
	private void move(){
		//moves the man left or right.
		Vector3 tempPos = transform.position; 
		if(movingLeft){
			tempPos.x -= 0.1f;
		}else{
			tempPos.x += 0.1f;
		}

		this.transform.position = tempPos;
	}

}