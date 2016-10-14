//this class sets the movement of a laser
using UnityEngine;
using System.Collections;

public class LaserMovement : MonoBehaviour
{
	//the speed of the laser
	public int invaderSpeed, manSpeed;
	private PlayerFire playerFire;
	private ManFire manFire;
	private LaserType laserType;

	//make sure that invader lasers and man lasers ignore collisions
	//future idea would be for them to destroy each other when they hit
	void Start(){
		IgnoreLaserCollisions();
	}

	//make invader lasers and man lasers ignore collisions
	private void IgnoreLaserCollisions(){
		if(gameObject.name.StartsWith("Laser")){
			GameObject playerLaser = GameObject.FindGameObjectWithTag("ManLaser");
			if(playerLaser != null){
				Physics2D.IgnoreCollision(playerLaser.GetComponent<BoxCollider2D>(), gameObject.GetComponent<BoxCollider2D>(), true);
			}
		}
	}

	//this is called whenever a laser is spawned
	//it sends it flying up or down, depending on the laser type
	public void startMoving(){

		//as soon as the laser is spawned, send it flying
		//pew pew pew!

		if(laserType == LaserType.Man){
			this.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * manSpeed);
		}else{
			this.GetComponent<Rigidbody2D> ().AddForce (Vector2.down * invaderSpeed);
		}
	}

	//just in case, ignore more stuff
	private void OnTriggerEnter2D (Collider2D collision)
	{
		if(collision.gameObject.name.Equals("man") && laserType == LaserType.Man){
			Physics2D.IgnoreCollision(collision.gameObject.GetComponent<Collider2D>(), gameObject.GetComponent<Collider2D>());

		}else if(collision.gameObject.name.StartsWith("Invader") && (laserType == LaserType.Invader)){
			Physics2D.IgnoreCollision(collision.gameObject.GetComponent<Collider2D>(), gameObject.GetComponent<Collider2D>());

		}else if(collision.gameObject.name == "Finish Line"){
			Physics2D.IgnoreCollision(collision.gameObject.GetComponent<Collider2D>(), gameObject.GetComponent<Collider2D>());
		}else{

		//stop the laser from moving
		this.GetComponent<Rigidbody2D> ().velocity = Vector3.zero;
		//destroy the laser
		Destroy (gameObject, 0.08f);

		if(laserType == LaserType.Man){
			playerFire = GameObject.Find ("man").GetComponent ("PlayerFire") as PlayerFire;
			//in the FireLaser script, set laserActive to false
			//so that we can fire another one
			playerFire.setLaserActive (false);

			}
		}
	}

	//sets the laser type
	public void setLaserType(LaserType newType){
		laserType = newType;
	}


}
