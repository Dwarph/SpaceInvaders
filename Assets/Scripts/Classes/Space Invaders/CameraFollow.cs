using UnityEngine;
using System.Collections;

//this class forces the camera to follow the player in the x axis.
public class CameraFollow : MonoBehaviour
{
	GameObject player;
	// Use this for initialization
	void Start ()
	{
		//gets the player
		player = GameObject.Find ("Player");


	}
	
	// Update is called once per frame
	void Update ()
	{
		//follow the player if they have killed the manmade ship
		if (GameObject.Find ("man") == null) {
			lockCameraToPlayer ();
		}

	}

	void lockCameraToPlayer ()
	{

		//if the player moves left or right, the camera moves left or right

		Vector3 tempPos = transform.position; 
		tempPos.x = player.transform.position.x;
		this.transform.position = tempPos;
	}


}
