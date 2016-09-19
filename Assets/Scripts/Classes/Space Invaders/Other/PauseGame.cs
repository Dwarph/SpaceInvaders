using UnityEngine;
using System.Collections;

public class PauseGame : MonoBehaviour {

	private PlayerMovement p;

	// Use this for initialization
	void Start () {
		p = GameObject.Find("man").GetComponent("PlayerMovement") as PlayerMovement;

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void setMove(bool mov){
		p.setMove(false);
	}

	public IEnumerator Pause(float p, bool movePlayer)
	{
		PlayerMovement playerMove = GameObject.Find("man").GetComponent("PlayerMovement") as PlayerMovement;
		Debug.Log("pausing game");
		playerMove.setMove(false);
		Time.timeScale = 0f;
		float pauseEndTime = Time.realtimeSinceStartup + p;
		while (Time.realtimeSinceStartup < pauseEndTime)
		{
			yield return 0;
		}
		playerMove.setMove(true);
		Time.timeScale = 1;
		if(movePlayer){
			movePlayerToStart();
		}
	}

	private void movePlayerToStart(){
		GameObject man = GameObject.Find("man");
		Vector3 tempPos = man.transform.position; 
		tempPos.x = -160.4F;
		tempPos.y = 1.598F;
		man.transform.position = tempPos;
		
	}
}
