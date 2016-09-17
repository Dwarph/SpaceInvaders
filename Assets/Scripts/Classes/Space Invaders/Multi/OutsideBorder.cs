using UnityEngine;
using System.Collections;

public class OutsideBorder : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		checkOutsideBorder();
	}

	public void checkOutsideBorder(){
		if (gameObject.transform.position.y < GameObject.Find("Floor").transform.position.y){
			Destroy(this.gameObject, 0);
		}
	}
}
