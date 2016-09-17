using UnityEngine;
using System.Collections;

//this class places all the invaders in their rightful place
public class InvaderSetUp : MonoBehaviour
{
	
	public GameObject[] invaderPrefabs;
	private int numberOfInvadersRow, numberOfInvadersCol;
	private int noOfInvaders;

	//this is called before start
	void Awake ()
	{

		//set the number of rows and columns of invaders
		noOfInvaders=0;
		numberOfInvadersCol = 5;
		numberOfInvadersRow = 11;
		
		placeInvaders ();

	}

	//this method places invaders
	private void placeInvaders ()
	{

		GameObject invader;
		Vector3 tempPos = transform.position;

		//loop through the amount of invaders we need to create
		for (int i = 0; i< numberOfInvadersCol; i++) {
	
			for (int j = 0; j< numberOfInvadersRow; j++) {

				//if it isn't the space that the player will fill
				if (!(i == 0 && j == 5)) {
					//add an invader there
					invader = Instantiate (invaderPrefabs [0], tempPos, transform.rotation) as GameObject;
					invader.gameObject.name = "Invader" + i + "," + j;
					invader.transform.parent = this.gameObject.transform;

					//otherwise, move the player to their space
				} else {
					GameObject.Find ("Player").transform.position = tempPos;
				}
				setNoOfInvaders(1);
				tempPos.x = tempPos.x + 5f;
			}
			tempPos.x = this.transform.position.x;
			tempPos.y = tempPos.y - 3.5f;
		}

	}

	public int getNoOfInvaders(){
		return noOfInvaders;
	}

	public void setNoOfInvaders(int invaderNew){
		noOfInvaders += invaderNew;
	}
}
