using UnityEngine;
using System.Collections;

public class TypeOfLaser : MonoBehaviour {
	LaserType lt;


	public void setTypeOfLaser(LaserType newType){
		lt = newType;
	}

	public LaserType getTypeOfLaser(){
		return lt;
	}

}
