//this class displays a random name + number of family members everytime its kill invader method is called
using UnityEngine;
using System;

public class KilledText : MonoBehaviour
{
	public TextAsset namesFile;
	private String fullNames ;
	private String[] names, text;
	private int numberOfInvadersKilled;
	UnityEngine.UI.Text[] textObjects;

	// Use this for initialization
	void Start ()
	{
		text = new string[4]{"You Just Killed: ", "They had", "Family Member", "s"};
		numberOfInvadersKilled = 0;
		readInNames ();
		textObjects = new UnityEngine.UI.Text[5];
		textObjects [0] = GameObject.Find ("You Just Killed").GetComponent<UnityEngine.UI.Text> ();
		textObjects [1] = GetComponent<UnityEngine.UI.Text> ();
		textObjects [2] = GameObject.Find ("Family Members 1").GetComponent<UnityEngine.UI.Text> ();
		textObjects [3] = GameObject.Find ("NoOfMembers").GetComponent<UnityEngine.UI.Text> ();
		textObjects [4] = GameObject.Find ("Family Members 2").GetComponent<UnityEngine.UI.Text> ();


	}

	//get all the names in an array
	private void readInNames ()
	{
		names = namesFile.text.Split (new string[] { "\n" }, StringSplitOptions.None);
	}

	//get a random int in a certain range
	private int getRandNum (int range)
	{
		return UnityEngine.Random.Range (0, range);
	}

	//display "You Just Killed: name"
	private void displayDeadInvaderName ()
	{
		//get random name
		String name = names [getRandNum (names.Length)];
		try {

			//if the player has killed 1 or more invaders, display it
			if (numberOfInvadersKilled > 0) {
				textObjects [0].text = text [0];
				textObjects [1].text = name;
			}
		} catch (MissingReferenceException m) {
		
		}
	}

	//display "They Had x Family Member(s)
	private void displayDeadInvaderFamilyMembers ()
	{
		//get a random number between + including 0 and 10
		int familyMembers = getRandNum (11);
		try {
			//if the player has killed 1 or more invaders, display it
			if (numberOfInvadersKilled > 0) {
				textObjects [2].text = text [1];
				textObjects [3].text = "" + familyMembers;
				if (familyMembers != 1) {
					//if the amount of family members is not 1, use an s
					textObjects [4].text = text[2] + text[3];
				} else {
					//otherwise, don't use an s
					textObjects [4].text = text[2];
				}
			}
		} catch (MissingReferenceException m) {
		
		}

	}

	//called by other classes
	public void killInvader ()
	{
		numberOfInvadersKilled++;
		displayDeadInvaderName ();
		displayDeadInvaderFamilyMembers ();
	}
}