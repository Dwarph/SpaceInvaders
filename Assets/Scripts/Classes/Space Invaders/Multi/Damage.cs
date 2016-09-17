using UnityEngine;
using System.Collections;

//This class gives a GameObject the ability to deal damage to something
public class Damage : MonoBehaviour
{

	//we need a variable to hold the amount of damage, which is editable in the editor
	public int damage;

	//we need to get this damage when it is needed
	public int getDamage ()
	{
		return damage;
	}
}
