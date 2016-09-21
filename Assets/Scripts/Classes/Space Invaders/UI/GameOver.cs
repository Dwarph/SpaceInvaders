using UnityEngine;
using System.Collections;

public class GameOver : MonoBehaviour {
	private int totalScore;
	bool gameOver;
	private Score s;
	public AudioClip deadFX;
	AudioSource audioS;
	bool playerWins;
	private WaitForTime wait;

	UnityEngine.UI.Text gameOverText, gameOverScore, replayText; 

	// Use this for initialization
	void Start () {
		wait = GameObject.Find("Space Invader Start").GetComponent("WaitForTime") as WaitForTime;
		audioS = GetComponent<AudioSource>();
		gameOver = false;
		s = GameObject.Find("Score Number").GetComponent("Score") as Score;
		gameOverText = GetComponent<UnityEngine.UI.Text>();
		gameOverScore = GameObject.Find("GameOver Score").GetComponent<UnityEngine.UI.Text>();
		replayText = GameObject.Find("Replay Text").GetComponent<UnityEngine.UI.Text>();

	}


	// Update is called once per frame
	void Update () {
		if(gameOver){
			displayGameOverText();
			checkForAnyKey();
		}

	}

	private void displayGameOverText(){
		string finalText;
		totalScore = s.getTotalScore();

		if(!playerWins){
			finalText = "Game Over!\n" +
						"Your Score is:";
		}else{
			finalText = "Well done Earthling. This time you win.\n" +
					"Your Score is:";
		}

		replayText.text = "Press any key to replay.";

		gameOverText.text = finalText;
		gameOverScore.text = ""+totalScore;
	}

	public void isGameOver(bool gO, bool playerDeath, bool win){
		gameOver = gO;
		playerWins = win;
		if(playerDeath){
			audioS.PlayOneShot(deadFX, 0.35F);

		//	GameObject.Find("Main Camera").GetComponent<AudioListener>().enabled = false;
		}
	}

	void checkForAnyKey(){
		if (Input.anyKeyDown){
			Time.timeScale = 1;
			Application.LoadLevel(Application.loadedLevel);
		}	
	}

}
