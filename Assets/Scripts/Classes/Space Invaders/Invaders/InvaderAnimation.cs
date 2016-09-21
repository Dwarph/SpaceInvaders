using UnityEngine;
using System.Collections;

public class InvaderAnimation : MonoBehaviour {

	public Sprite[] sprites;
	private SpriteRenderer spriteRend;
	private bool open;

	// Use this for initialization
	void Start () {
		spriteRend = GetComponent<SpriteRenderer>();
		open = false;
	}
	
	// Update is called once per frame
	void Update () {
		checkForSpriteChange();
	}

	public void isOpen(bool isOpen){
		open = isOpen;
	}

	private void checkForSpriteChange(){
		if(open){
			spriteRend.sprite = sprites[0];
		}else{
			spriteRend.sprite = sprites[1];
		}

	}
}
