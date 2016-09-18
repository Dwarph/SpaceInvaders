using UnityEngine;
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
		scoreText.text = "" + totalScore;
	}

	public int getTotalScore(){
		return totalScore;
	}
}
