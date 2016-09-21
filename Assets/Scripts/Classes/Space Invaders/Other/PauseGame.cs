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
	
	// Update is called once per frame
	void Update () {
	
	}

	void setMove(bool mov){
		playerMove.setMove(false);
	}

	public IEnumerator Pause(float p, bool movePlayer)
	{
		float prevMoveSpeed;
		if(movePlayer){
			spriteRend.sprite = sprites[0];
			man.transform.localScale = new Vector3( 31f, 31f, 1f);
			playerMove.movePlayer(0.9f, false);
		}

		Debug.Log("pausing game");

		prevMoveSpeed = playerMove.move_speed;
		playerMove.move_speed =0;
		Time.timeScale = 0f;
		float pauseEndTime = Time.realtimeSinceStartup + p;
		while (Time.realtimeSinceStartup < pauseEndTime)
		{
			yield return 0;
		}

		playerMove.move_speed =prevMoveSpeed;
		Time.timeScale = 1;

		if(movePlayer){
			movePlayerToStart();
			spriteRend.sprite = sprites[1];
			man.transform.localScale = new Vector3( 10f, 10f, 1f);

		}
	}

	private void movePlayerToStart(){

		Vector3 tempPos = man.transform.position; 
		tempPos.x = -160.4F;
		tempPos.y = 1.598F;
		man.transform.position = tempPos;
		
	}
}
