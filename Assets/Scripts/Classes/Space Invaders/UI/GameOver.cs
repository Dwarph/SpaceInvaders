//this ckass handles all the fun ui stuff that happens when it is game over 
using UnityEngine;
using System.Collections;

public class GameOver : MonoBehaviour {
	private int totalScore;
	bool gameOver;
	private Score s;
	public AudioClip deadFX;
	AudioSource audioS;
	bool playerWins;

	UnityEngine.UI.Text gameOverText, gameOverScore, replayText; 

	// Use this for initialization
	void Start () {
		audioS = GetComponent<AudioSource>();
		gameOver = false;
		s = GameObject.Find("Score Number").GetComponent("Score") as Score;
		gameOverText = GetComponent<UnityEngine.UI.Text>();
		gameOverScore = GameObject.Find("GameOver Score").GetComponent<UnityEngine.UI.Text>();
		replayText = GameObject.Find("Replay Text").GetComponent<UnityEngine.UI.Text>();

	}


	// Update is called once per frame
	void Update () {
		//check to see if it is gameOver 
		if(gameOver){
			//if it is, display the "game over text" + 
			//wait for the user to press the r key
			displayGameOverText();
			checkForRKey();
		}

	}

	//display the game over text
	private void displayGameOverText(){
		string finalText;
		//get the player's total score
		totalScore = s.getTotalScore();

		//if the player has lost, display bad text
		if(!playerWins){
			finalText = "Game Over!\n" +
						"Your Score is:";
		}else{
		//otherwise, display good text
			finalText = "Well done Earthling. This time you win.\n" +
					"Your Score is:";
		}
		//tell the player to press r to replay.
		replayText.text = "Press 'r' to replay.";

		//set the text
		gameOverText.text = finalText;
		gameOverScore.text = ""+totalScore;
	}

	//method that you access in other classes to tell this class that it is gameOver
	public void isGameOver(bool gO, bool playerDeath, bool win){
		gameOver = gO;
		playerWins = win;
		if(playerDeath){
			//if the player gets shot, play the right sound
			audioS.PlayOneShot(deadFX, 0.35F);

		//	GameObject.Find("Main Camera").GetComponent<AudioListener>().enabled = false;
		}
	}

	//if the r key is presed, reload the level
	private void checkForRKey(){
		if (Input.GetKey("r")){
			Time.timeScale = 1;
			Application.LoadLevel(Application.loadedLevel);
		}	
	}

}
