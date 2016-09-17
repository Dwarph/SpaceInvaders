using UnityEngine;
using System.Collections;

//this class allows the GameObject it is attached to, to fire a laser
public class PlayerFire : MonoBehaviour
{
	FireLaser f;
	

	//variable determining whether a laser is currently on screen
	private bool laserActive;
	
	// Use this for initialization
	void Start ()
	{
		f = gameObject.GetComponent("FireLaser") as FireLaser;
		//when we start, there won't be a laser onscreen
		setLaserActive (false);
	}
	
	// Update is called once per frame
	void Update ()
	{
		checkForInput ();
	}
	
	
	//check for appropriate player input
	void checkForInput ()
	{		
		//if space is pressed and there is no laser, fire a laser
		if (Input.GetKey ("space") && !laserActive) {
			f.fireLaser ();
			//set laserActive to true, as a laser has just been created
			setLaserActive (true);
			
			//laserActive is set to false in the LaserMovement script, once the laser has been destroyed.
		}
	}

	
	public void setLaserActive (bool active)
	{
		laserActive = active;
	}
	
}
