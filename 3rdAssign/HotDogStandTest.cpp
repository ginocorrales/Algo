/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 3
Chap7 Prob.4

This is a operator of a Hot Dog stands. This program manages the daily sales of hot dogs per stand, as well this program manage the total hot dogs sale for all the stands
*/

#include <iostream>
#include "HotDogStand.h"
using namespace std;

int HotDogStand::totalHDSold=0;  //static variable, must be initialized outside the class definition

int main()
{
  // Five main objects of HotDogStand class, sending the stand ID and the number of sold hot dogs 
  HotDogStand stand1(1,0); 
  HotDogStand stand2(2,0);
  HotDogStand stand3(10,0);
  HotDogStand stand4(50,0);
  HotDogStand stand5(100,0);
  
  // start the hot dogs season... (hot dog sales)
	stand1.JustSold();
	stand1.JustSold();
	stand2.JustSold();
	stand3.JustSold();
	stand2.JustSold();
	stand4.JustSold();
	stand5.JustSold();
	stand5.JustSold();
	stand1.JustSold();
	stand1.JustSold();
	stand5.JustSold();
	stand3.JustSold();
	stand4.JustSold();
  
  //printing totals
  cout << "*************** HOTDOG STAND MANAGEMENT ***************"<< endl; 
  cout << "Stand1 sold " << stand1.NumberHDSold() << " delicious Hot Dogs"<< endl ;
	cout << "Stand2 sold " << stand2.NumberHDSold() << " delicious Hot Dogs"<< endl ;
	cout << "Stand3 sold " << stand3.NumberHDSold() << " delicious Hot Dogs"<< endl ;
	cout << "Stand4 sold " << stand4.NumberHDSold() << " delicious Hot Dogs"<< endl ;
	cout << "Stand5 sold " << stand5.NumberHDSold() << " delicious Hot Dogs"<< endl ;
 
	cout << "***** Grand Total: "<< HotDogStand::TotalNumberHDSold() << " hot dogs sold in 5 stands *****"<< endl;
	
	return 0;
}


