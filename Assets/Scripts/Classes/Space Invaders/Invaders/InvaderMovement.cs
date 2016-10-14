//This class handles every Invader's movement.
using UnityEngine;
using System.Collections;

//this class lets the space invaders move as a group
public class InvaderMovement : MonoBehaviour
{
	//we need to store the furthest left invader and the furthest right invaders that are still alive
	private GameObject maxLeftInvader, maxRightInvader;

	//we need to store the furthest left column and the furthest right column that are still alive
	private int maxLeftCol, maxRightCol;

	//we need the number of rows and columns of invaders
	private int numberOfInvadersRow, numberOfInvadersCol;

	//we need a number of alive invaders 
	private int numberOfAliveInvaders, numberOfRowsMoved;

	//the time between movements
	private float waitTime;

	//we need an array to hold all the invaders in, in order to easily iterate upon them
	private GameObject[,] invaders;

	//we need to know which direction we are moving in
	private bool moveR, open;

	//need this to access the numberOfAliveInvaders
	private InvaderSetUp invSet;

	public AudioClip[] movementFXs;
	AudioSource audioS;
	private int audioNum;
	private InvaderAnimation invAnim;

	//Called at the start of the game - used for initialisation
	void Start ()
	{
		open = false;
		audioNum = 0;
		audioS = GetComponent<AudioSource>();
		numberOfRowsMoved = 1;
		moveR = false;
		numberOfInvadersCol = 5;
		numberOfInvadersRow = 11;
		maxLeftCol = 0;
		maxRightCol = numberOfInvadersRow - 1;
		invaders = new GameObject[numberOfInvadersCol, numberOfInvadersRow];
		invSet = GameObject.Find("Space Invader Start").GetComponent("InvaderSetUp") as InvaderSetUp;
		numberOfAliveInvaders = invSet.getNoOfInvaders();
		getAllInvaders ();

		//repeatedly move forever
		StartCoroutine(repeatMove());
	}

	IEnumerator repeatMove(){
		while (numberOfAliveInvaders!=0){
		numberOfAliveInvaders = invSet.getNoOfInvaders();
			if(numberOfAliveInvaders==0){
				Destroy(this);
			}

		waitTime= (float) (14 -numberOfRowsMoved)*1.5f /(float)(75 - numberOfAliveInvaders);

		moveInvaders();
		open = !open;
		playSound();
		yield return new WaitForSeconds(waitTime);
		}
	}

	//this method moves the invaders
	void moveInvaders ()
	{

		//find the right maxInvader
		findInvader (false);
		//find the left maxInvader
		findInvader (true);

		//if we are moving right, move right
		if (moveR) {
			if(maxRightInvader!=null){
				moveRight ();
			}
			//otherwise move left
		} else {
			if(maxLeftInvader!=null){
				moveLeft ();
			}
		}
	}

	void playSound(){
		if(audioNum==4){
			audioNum = 0;
		}
		audioS.PlayOneShot(movementFXs[audioNum], 0.4F);

		audioNum++;
	}

	//this method moves all invaders left
	void moveLeft ()
	{
		//if the furthest left invader will touch the wall if they move any further
		if (maxLeftInvader.transform.position.x - 0.5f < -170.2) {
			//move right
			moveR = true;
			//move down
			for (int j = maxLeftCol; j< numberOfInvadersRow; j++) {
				move (false, -2f, j);
				//1.6
			}
			setNoOfRowsMoved(1);
			//break out of the method
			return;
		}

		//move each invader left
		for (int j = maxLeftCol; j< numberOfInvadersRow; j++) {
			move (true, -0.5f, j);
		}

	}

	//this method moves all invaders left
	void moveRight ()
	{
		//if the furthest right invader will touch the wall if they move any further
		if (maxRightInvader.transform.position.x + 0.5f > -101.2) {
			//move left
			moveR = false;	
			//move down
			for (int j = maxRightCol; j >= 0; j--) {
				move (false, -2f, j);
			}
			setNoOfRowsMoved(1);
			//break out of the method
			return;
		}

		//move each invader right
		for (int j = maxRightCol; j >= 0; j--) {
			move (true, 0.5f, j);
		}
	}

	//this method actually moves the invader
	//it takes a boolean, a float and an int
	//Boolean: Whether we are moving on the X or Y axis
	//Float: The distance we are moving
	//Int: the column we are on
	void move (bool xAxis, float distance, int j)
	{
		Vector3 tempPos; 

		//for all invaders in this row
		for (int i = 0; i< numberOfInvadersCol; i++) {
			//if the invader is alive
			if (invaders [i, j] != null) {
			//if the invader isn't the player
				//get its position
				tempPos = invaders [i, j].transform.position; 
				//if we're moving on the x axis
				if (xAxis) {
					//move on the x axis
					tempPos.x += distance;
					//if we're on the y axis
				} else {
					//move on the y axis
					tempPos.y += distance;
				}
				//set the position
				invaders [i, j].transform.position = tempPos;
			}
			changeSprites(i, j);
		}

	}

	//this finds the max invader
	//it takes in a boolean
	//Boolean: Whether we are looking on the right hand side or left
	void findInvader (bool right)
	{
		//if we're looking on the right hand side 
		if (right) {
			//loop through the rows
			for (int j = maxRightCol; j >= 0; j--) {
				//if the column isn't all destroyed
				if (findMaxCol (j) != 0) {
					//set the column to the maxRightCol
					maxRightCol = j;
					break;
				}
			}
			//loop through the maxCol
			for (int i = 0; i<numberOfInvadersCol; i++) {
				//if the invader we come to isn't destroyed
				if (invaders [i, maxRightCol] != null) {
					//set it as the max right invader
					maxRightInvader = invaders [i, maxRightCol];
					break;
				}
			}
		
			//if we're looking through the left hand side
		} else {

			//loop through the rows
			for (int j = maxLeftCol; j< numberOfInvadersRow; j++) {
				//if the column isn't all destroyed
				if (findMaxCol (j) != 0) {
					//set the column to the maxLeftCol
					maxLeftCol = j;
					break;
				}
			}

			//loop through the maxCol
			for (int i = 0; i<numberOfInvadersCol; i++) {
				//if the invader we come to isn't destroyed
				if (invaders [i, maxLeftCol] != null) {
					//set it as the max left invader
					maxLeftInvader = invaders [i, maxLeftCol];
					break;
				}
			}

		}
	}
	//0fff00ff
	//find the max column
	//takes in an Integer
	//Int: The current Column we're on
	int findMaxCol (int j)
	{

		int colCounter;
		colCounter = 0;
		//loop through the row
		for (int i = 0; i< numberOfInvadersCol; i++) {
			//if the invader is alive
			if (invaders [i, j] != null) {
				//increment the column counter
				colCounter++;
			}
		}
		return colCounter;
	}

	//get all the invaders before any of them have been destroyed
	//this is so we can make them do stuff as a collective ! 
	void getAllInvaders ()
	{
		for (int i = 0; i< numberOfInvadersCol; i++) {		
			for (int j = 0; j< numberOfInvadersRow; j++) {
				invaders [i, j] = GameObject.Find ("Invader" + i + "," + j);
			}
		}
	
	}

	public GameObject getMaxLeftInvader(){
		return maxLeftInvader;
	}

	public GameObject getMaxRightInvader(){
		return maxRightInvader;
	}

	private void setNoOfRowsMoved(int newColumn){
		numberOfRowsMoved += newColumn;
	}
	
	private void changeSprites(int i, int j){
		if(invaders[i,j] != null){
			invAnim = invaders [i, j].GetComponent("InvaderAnimation") as InvaderAnimation;
			invAnim.isOpen(open);
		}
	}
}