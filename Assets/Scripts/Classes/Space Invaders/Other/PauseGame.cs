//this class changes the time scale of the game to 0.
using UnityEngine;
using System.Collections;

public class PauseGame : MonoBehaviour {
	
	private GameObject man;
	public Sprite[] sprites;
	private SpriteRenderer spriteRend;
	PlayerMovement playerMove;

	// Use this for initialization
	void Start () {
		playerMove = GameObject.Find("man").GetComponent("PlayerMovement") as PlayerMovement;
		man = GameObject.Find("man");
		spriteRend = man.GetComponent<SpriteRenderer>();
	

	}
	//sets whether the player can move or not
	private void setMove(bool mov){
		playerMove.setMove(false);
	}

	//"pauses" the game
	public IEnumerator Pause(float p, bool movePlayer)
	{

		float prevMoveSpeed;
		if(movePlayer){
			//if the player can move, 
			//set them as the "exploded" sprite
			//and move that sprite slightly downwards so it looks like it is sitting on the floor
			//yay bad sprite design
			spriteRend.sprite = sprites[0];
			man.transform.localScale = new Vector3(31f, 31f, 1f);
			playerMove.movePlayer(0.9f, false);
		}

		Debug.Log("pausing game");
		//get the player's previous speed
		prevMoveSpeed = playerMove.move_speed;
		//stop the player from moving
		playerMove.move_speed =0;

		Time.timeScale = 0f;
		//store the amount of time you want to pause the game for
		float pauseEndTime = Time.realtimeSinceStartup + p;

		//pause!!
		while (Time.realtimeSinceStartup < pauseEndTime)
		{
			yield return 0;
		}
		//let the player move again
		playerMove.move_speed =prevMoveSpeed;
		//unpause
		Time.timeScale = 1;

		//if the player can move
		if(movePlayer){
			//move them to the start
			movePlayerToStart();
			//set their sprite back to normal
			spriteRend.sprite = sprites[1];
			//move them a bit
			man.transform.localScale = new Vector3( 10f, 10f, 1f);

		}
	}

	//moves the player back to their starting position
	private void movePlayerToStart(){

		Vector3 tempPos = man.transform.position; 
		tempPos.x = -160.4F;
		tempPos.y = 1.598F;
		man.transform.position = tempPos;
		
	}
}
