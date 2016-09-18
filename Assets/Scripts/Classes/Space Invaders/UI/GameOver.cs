using UnityEngine;
using System.Collections;

public class GameOver : MonoBehaviour {
	private int totalScore;
	bool gameOver;
	private Score s;

	UnityEngine.UI.Text GameOverText, GameOverScore; 

	// Use this for initialization
	void Start () {
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
		totalScore = s.getTotalScore();
		GameOverText.text = "Game Over!\nYour Score is:";
		GameOverScore.text = "" + totalScore;
	}

	public void isGameOver(bool gO){
		gameOver = gO;
	}
}
