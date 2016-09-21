using UnityEngine;
using System;
using System.Collections;

public class FireLaser : MonoBehaviour {

	//the laser's object
	public GameObject laserPrefab;
	public AudioClip fireFX;
	AudioSource audioS;
	LaserMovement ls;
	TypeOfLaser laserType;

	void Start(){
		audioS = GetComponent<AudioSource>();
	}

	public void fireLaser ()
	{
		
		GameObject laserClone;
		//we need to spawn the laser slightly below the centre of the player model
		//otherwise the laser appears to come out of the alien's belly button
		Vector3 tempPos = transform.position;
		if(getLaserType().Equals(LaserType.Man)){
			tempPos.y += 2.5f;
		}else{
			tempPos.y -= 2.5f;
		}
		//spawn the laser
		laserClone = Instantiate (laserPrefab, tempPos, transform.rotation) as GameObject; 

		laserType =  laserClone.GetComponent("TypeOfLaser") as TypeOfLaser;
		ls = laserClone.GetComponent("LaserMovement") as LaserMovement;

		laserType.setTypeOfLaser(getLaserType());
		ls.setLaserType(laserType.getTypeOfLaser());
		try{
			audioS.PlayOneShot(fireFX, 0.3F);
		}catch(NullReferenceException e){
			Debug.Log ("This would have errored");
		}
		ls.startMoving();
	
	}

	private LaserType getLaserType(){
		if(gameObject.name==("Player")){
			return LaserType.Player;
			
		} else if (gameObject.name==("man")){
			return LaserType.Man;
			
		} else if (gameObject.name.StartsWith("Invader")){
			return LaserType.Invader;
		} else{
			return LaserType.Other;
		}
	}
	
}
