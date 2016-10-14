//displays the score
using UnityEngine;
using System;
using System.Collections;

public class Score : MonoBehaviour {

	private int totalScore;
	private UnityEngine.UI.Text scoreText;

	//initialise variables
	void Start(){
		totalScore = 0;
		scoreText = GetComponent<UnityEngine.UI.Text>();
		scoreText.text = "" + totalScore;
	}

	//updates the score on screen
	public void UpdateTotalScore(int scoreAddition){
		totalScore += scoreAddition;
		try{
			//set the score
			scoreText.text = "" + totalScore;
		}catch(MissingReferenceException m){
			//occasionally during the game setup,
			//this can't reference anything yet
			//this trycatch block stops the compiler from complaining
		}
	}

	//returns the total score to what 
	public int getTotalScore(){
		return totalScore;
	}
}
