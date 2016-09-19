using UnityEngine;
using System;
using System.Collections;

public class Score : MonoBehaviour {

	private int totalScore;
	private UnityEngine.UI.Text scoreText;

	void Start(){
		totalScore = 0;
		scoreText = GetComponent<UnityEngine.UI.Text>();
		scoreText.text = "" + totalScore;
	}

	public void UpdateTotalScore(int scoreAddition){
		totalScore += scoreAddition;
		try{
			scoreText.text = "" + totalScore;
		}catch(MissingReferenceException m){
		}
	}

	public int getTotalScore(){
		return totalScore;
	}
}
