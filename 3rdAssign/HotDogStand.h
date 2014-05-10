#ifndef _HOTDOGSTAND_H_
#define _HOTDOGSTAND_H_
/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 3
Chap7 Prob.4

This is the header of the HotDogStand class
*/

class HotDogStand{

  private:
		int standID;	// Identification number of the stand
		int hotDogSold;   //  number of hot dog(HD) sold.
    static int totalHDSold;  // total number of hot dogs sold by all stands

  public:
    
		HotDogStand();	// Defaul Constructor
		HotDogStand(int standID, int hotDogSold); // Overloaded Constructor receiving the ID number and how many HD sold 
    ~HotDogStand();	// Default Destructor

    void JustSold();	// Increments the number of HD sold in the stand and add also one to the HD total by all the stands.
   
    int NumberHDSold(); // Return a number of HD sold by the specific stand
    static int TotalNumberHDSold();  // Return a number of HD sold by ALL the HD stands

};
#endif

