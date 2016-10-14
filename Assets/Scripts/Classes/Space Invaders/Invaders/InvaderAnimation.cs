//This Class handles the invader's sprite swapping.

using UnityEngine;
using System.Collections;

public class InvaderAnimation : MonoBehaviour {

	//We need the sprites we're going to swap, 
	//where we're going to use them
	//and which state the invader is currently in.

	public Sprite[] sprites;
	private SpriteRenderer spriteRend;
	private bool open;

	// Used for initialisation.
	void Start () {
		spriteRend = GetComponent<SpriteRenderer>();
		open = false;
	}
	
	// Update is called once per frame
	void Update () {
		checkForSpriteChange();
	}

	//sets open
	public void isOpen(bool isOpen){
		open = isOpen;
	}

	//changes sprite if needed
	private void checkForSpriteChange(){
		if(open){
			spriteRend.sprite = sprites[0];
		}else{
			spriteRend.sprite = sprites[1];
		}

	}
}
