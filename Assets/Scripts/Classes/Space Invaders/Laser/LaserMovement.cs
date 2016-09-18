using UnityEngine;
using System.Collections;

//this class sets the movement of a laser
public class LaserMovement : MonoBehaviour
{
	//the speed of the laser
	public int invaderSpeed, manSpeed;
	private PlayerFire playerFire;
	private ManFire manFire;
	private LaserType laserType;


	void Start(){
		IgnoreLaserCollisions();

	}

	private void IgnoreLaserCollisions(){
		if(gameObject.name.StartsWith("Laser")){
			GameObject playerLaser = GameObject.FindGameObjectWithTag("ManLaser");
			if(playerLaser != null){
				Physics2D.IgnoreCollision(playerLaser.GetComponent<BoxCollider2D>(), gameObject.GetComponent<BoxCollider2D>(), true);
			}
		}
	}

	public void startMoving(){

		//as soon as the laser is spawned, send it flying
		//pew pew pew!

		if(laserType == LaserType.Man){
		
			this.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * manSpeed);
		}else{
		
			this.GetComponent<Rigidbody2D> ().AddForce (Vector2.down * invaderSpeed);
		}
	}

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

	public void setLaserType(LaserType newType){
		laserType = newType;
	}


}
