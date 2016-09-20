using UnityEngine;
using System.Collections;

public class WaitForTime : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	public IEnumerator waitFor(float waitTime){
		yield return new WaitForSeconds(waitTime);
	}
}
