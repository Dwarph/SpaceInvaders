using UnityEngine;
using System.Collections;

public class ManFire : MonoBehaviour {
	FireLaser f;
	bool laserActive;


	// Use this for initialization
	void Start () {
		f = gameObject.GetComponent("FireLaser") as FireLaser;
	}
	
	// Update is called once per frame
	void Update () {
		fire();
	}

	void fire ()
	{		
		//if space is pressed and there is no laser, fire a laser
		if (!laserActive) {
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
