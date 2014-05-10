/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 3
Chap7 Prob.4

This is the .cpp file of the HotDogStand class.
*/

#include <iostream>
#include "HotDogStand.h"
using namespace std;

HotDogStand::HotDogStand(int standID, int hotDogSold){	//Class constructor
  this->standID = 0;
  this->hotDogSold = 0;

  this->standID = standID;
  this->hotDogSold = hotDogSold;
}

HotDogStand::~HotDogStand(){  // Class Destructor

}

void HotDogStand::JustSold(){	// When the hot dog stand make a sell 
	hotDogSold++;  
	totalHDSold++;
}

int HotDogStand::NumberHDSold(){  // return the total of hot dog sold in the specific stand
	return hotDogSold;
}

int HotDogStand::TotalNumberHDSold(){  // return the total hot dog sold in all the stands.
  return totalHDSold;
}



