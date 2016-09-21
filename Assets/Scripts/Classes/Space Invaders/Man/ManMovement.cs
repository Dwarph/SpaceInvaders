using UnityEngine;
using System.Collections;

public class ManMovement : MonoBehaviour {

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
		maxLeftInvader = invMove.getMaxLeftInvader();
		maxRightInvader = invMove.getMaxRightInvader();
		if(maxLeftInvader != null && maxRightInvader != null){
			movement();
		}
	}

	void movement(){
		if(movingLeft){
			if (transform.position.x < maxLeftInvader.transform.position.x){
				movingLeft = false;
			}
		} else{
			if (transform.position.x > maxRightInvader.transform.position.x){
				movingLeft = true;
			}
		}
		move();
	}

	void move(){
		Vector3 tempPos = transform.position; 
		if(movingLeft){
			tempPos.x -= 0.1f;
		}else{
			tempPos.x += 0.1f;
		}

		this.transform.position = tempPos;
	}

}