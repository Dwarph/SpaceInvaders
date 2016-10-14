//add this to an object that has a score.
using UnityEngine;
using System.Collections;

public class HasScore : MonoBehaviour {

	public int score;
	private Score s;
	private bool scoreCounts;

	//initialise variables
	void Start(){
		s = GameObject.Find("Score Number").GetComponent("Score") as Score;
		scoreCounts = true;
	}

	//set if the score counts or not
	public void setScoreCounts(bool counts){
		scoreCounts = counts;
	}

	//when this is destroyed, update the total score!
	void OnDestroy(){
		if(scoreCounts){
			s.UpdateTotalScore(score);
			}
		}
}
