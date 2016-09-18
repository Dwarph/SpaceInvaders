using UnityEngine;
using System.Collections;

public class HasScore : MonoBehaviour {

	public int score;
	private Score s;
	private bool scoreCounts;

	void Start(){
		s = GameObject.Find("Score Number").GetComponent("Score") as Score;
		scoreCounts = true;
	}

	public void setScoreCounts(bool counts){
		scoreCounts = counts;
	}

	void OnDestroy(){
		if(scoreCounts){
			s.UpdateTotalScore(score);
			}
		}
}
