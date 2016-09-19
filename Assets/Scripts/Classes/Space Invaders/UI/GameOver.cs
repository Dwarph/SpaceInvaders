using UnityEngine;
using System.Collections;

public class GameOver : MonoBehaviour {
	private int totalScore;
	bool gameOver;
	private Score s;
	public AudioClip deadFX;
	AudioSource audioS;
	bool playerWins;

	UnityEngine.UI.Text GameOverText, GameOverScore; 

	// Use this for initialization
	void Start () {
		audioS = GetComponent<AudioSource>();
		gameOver = false;
		s = GameObject.Find("Score Number").GetComponent("Score") as Score;
		GameOverText = GetComponent<UnityEngine.UI.Text>();
		GameOverScore = GameObject.Find("GameOver Score").GetComponent<UnityEngine.UI.Text>();

	}


	// Update is called once per frame
	void Update () {
		if(gameOver){
			displayGameOverText();
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

		GameOverText.text = finalText;
		GameOverScore.text = ""+totalScore;
	}

	public void isGameOver(bool gO, bool playerDeath, bool win){
		gameOver = gO;
		playerWins = win;
		if(playerDeath){
			audioS.PlayOneShot(deadFX, 0.8F);
		}
	}
}
