//This class handles the loading of space invaders
//If I ever redid space invaders, I would want to create a master class that holds all functions like this 
using UnityEngine;
using System.Collections;

public class LoadSpaceInvaders : MonoBehaviour {

	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Space)){
			Application.LoadLevel("Space Invaders");
		}

	}
}
