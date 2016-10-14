using UnityEngine;
using System.Collections;
//this class controls the shield sprites
public class DamagedShieldsSprites : MonoBehaviour {

	private Damagable damagable;
	public Sprite[] sprites;
	private SpriteRenderer spriteRend;

	// Use this for initialization
	void Start () {
		spriteRend = GetComponent<SpriteRenderer>();
		damagable = GetComponent("Damagable") as Damagable;
	}
	
	// Update is called once per frame
	void Update () {
		checkForSpriteChange();
	}

	//shield sprites have 3 states, depending on the amount of damage taken
	private void checkForSpriteChange(){
		switch(damagable.GetMaxHP()){
		case 3:
			spriteRend.sprite = sprites[0];
			break;
		case 2:
			spriteRend.sprite = sprites[1];
			break;
		case 1:
			spriteRend.sprite = sprites[2];
			break;
		}
	}


}
