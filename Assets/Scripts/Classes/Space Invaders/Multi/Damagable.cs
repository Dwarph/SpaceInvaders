using UnityEngine;
using System.Collections;

//this class gives a GameObject the ability to be damaged
public class Damagable : MonoBehaviour
{

	private PauseGame pause;
	//sound variables
	public AudioClip deadFX;
	AudioSource audioS;

	//we need the object to have a number of health points
	public int maxHP;

	//we need to be able to set the time that the object stays alive before dieing
	//this helps with game feel
	public float timeToDestroy;

	//we need somewhere to store the damage it will take
	private Damage damage;
	

	void Start(){

		audioS = GetComponent<AudioSource>();
		pause = GameObject.Find("Space Invader Start").GetComponent("PauseGame") as PauseGame;
	}
	//this class takes damage away from the object
	//if the health falls below 1, the object is destroyed
	public void takeDamage (int damage)
	{
		maxHP -= damage;

		if (maxHP < 1) {
			Destroy (gameObject, timeToDestroy);
		}
	}

	public int GetMaxHP(){
		return maxHP;
	}

	//called when something enters the trigger of the object this script is assigned to
	void OnTriggerEnter2D (Collider2D other)
	{

		//if a laser collides with this object
		if (other.gameObject.name.Contains("aser")) {

			TypeOfLaser typeOfLaser = other.GetComponent("TypeOfLaser") as TypeOfLaser;

			if(gameObject.name.StartsWith("Invader") || gameObject.name.Equals("Player")){
				
				if(typeOfLaser.getTypeOfLaser() != LaserType.Invader && typeOfLaser.getTypeOfLaser() != LaserType.Player ){
					damage = other.gameObject.GetComponent ("Damage") as Damage;
					Debug.Log(gameObject.name + "has been hit by a laser of type " + typeOfLaser.getTypeOfLaser().ToString());
					takeDamage (damage.getDamage ());
				}
			}
			else if(gameObject.name.Equals("man")){

				if(typeOfLaser.getTypeOfLaser() != LaserType.Man){

					damage = other.gameObject.GetComponent ("Damage") as Damage;
					audioS.PlayOneShot(deadFX, 0.35F);
					takeDamage (damage.getDamage ());
					Destroy(other.gameObject);

					StartCoroutine(pause.Pause(1, true));

				}
			}else{
				damage = other.gameObject.GetComponent ("Damage") as Damage;
				takeDamage (damage.getDamage ());
			}
			//take away the laser's damage from the building's health
						
		}
	}



}
