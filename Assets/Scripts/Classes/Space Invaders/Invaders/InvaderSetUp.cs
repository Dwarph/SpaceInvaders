﻿using UnityEngine;
using System.Collections;

//this class places all the invaders in their rightful place
public class InvaderSetUp : MonoBehaviour
{
	
	public GameObject[] invaderPrefabs;
	private GameObject[,] invaders;
	private int numberOfInvadersRow, numberOfInvadersCol;
	private int noOfInvaders, manHPLeft;
	private Damagable manHP;
	private GameOver gameOver;
	private WaitForTime wait;
	private AudioSource[] allAudioSources;
	

	//this is called before start
	void Awake ()
	{
		wait = GameObject.Find("Space Invader Start").GetComponent("WaitForTime") as WaitForTime;
		//set the number of rows and columns of invaders
		manHPLeft = 3;
		noOfInvaders=0;
		numberOfInvadersCol = 5;
		numberOfInvadersRow = 11;
		invaders = new GameObject[numberOfInvadersCol, numberOfInvadersRow];
		manHP = GameObject.Find("man").GetComponent("Damagable") as Damagable;
		gameOver = GameObject.Find("GameOver").GetComponent("GameOver") as GameOver;

		placeInvaders ();

	}



	void Update(){
		manHPLeft = manHP.GetMaxHP();
		if(manHPLeft == 0){
			StartCoroutine(wait.waitFor(0.1F));
			destroyAllInvaders(true, false);
		}
	}

	//this method places invaders
	private void placeInvaders ()
	{

		GameObject invader;
		Vector3 tempPos = transform.position;

		//loop through the amount of invaders we need to create
		for (int i = 0; i< numberOfInvadersCol; i++) {
	
			for (int j = 0; j< numberOfInvadersRow; j++) {
				//add an invader
				Debug.Log(""+i);
				switch(i){
					case 0:
						invader = Instantiate (invaderPrefabs [2], tempPos, transform.rotation) as GameObject;
						break;
					case 1:
					case 2:
						invader = Instantiate (invaderPrefabs [1], tempPos, transform.rotation) as GameObject;
						break;
					case 3:
					case 4:
						invader = Instantiate (invaderPrefabs [0], tempPos, transform.rotation) as GameObject;
						break;
				default:
						invader = Instantiate (invaderPrefabs [0], tempPos, transform.rotation) as GameObject;
					break;
				}
				invader.gameObject.name = "Invader" + i + "," + j;
				invader.transform.parent = this.gameObject.transform;
				setNoOfInvaders(1);
				invaders[i, j] = invader;

				tempPos.x = tempPos.x + 5f;
			}
			tempPos.x = this.transform.position.x;
			tempPos.y = tempPos.y - 3.5f;
		}

	}


	public void destroyAllInvaders(bool playerDeath, bool playerWin){
		GameObject[] lasers = GameObject.FindGameObjectsWithTag("Laser");
		foreach (GameObject laser in lasers){
			Destroy(laser);
		}

		lasers = GameObject.FindGameObjectsWithTag("ManLaser");

		foreach (GameObject laser in lasers){
			Destroy(laser);
		}

		HasScore h;
		for (int i = 0; i< numberOfInvadersCol; i++) {
			
			for (int j = 0; j< numberOfInvadersRow; j++) {

				if(invaders[i,j] != null){
					h = invaders[i,j].GetComponent("HasScore") as HasScore; 
					h.setScoreCounts(false);
					Destroy(invaders[i,j]);
					Destroy(this);
				}
			}
		}

		gameOver.isGameOver(true, playerDeath, playerWin);
	}
	public int getNoOfInvaders(){
		return noOfInvaders;
	}

	public void setNoOfInvaders(int invaderNew){
		noOfInvaders += invaderNew;

		if(noOfInvaders ==0){
			gameOver.isGameOver(true, true, true);
		}
	}
}
