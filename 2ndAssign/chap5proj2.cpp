/*
Write a function called deleteRepeats that has apartially filled array of characters as a formal parameter and that deletes all repeated letters from the array. Since a partially filled array requires two arguments, the function will actually have two formal parameters: an array parameter and a formal parameter of type int that gives the number of array positions used.

When a letter is deleted, the remaining letters are moved forward to fill in the gap. This will create empty positions at the end of the array so that less of the array is used. Since the formal parameter is a partially filled array, a second formal parameter of type int will tell how many array positions are filled. This second formal parameter will be a call-by-reference parameter and will be changed to show how much of the array is used after the repeated letters are deleted. For example, consider the following code:
   char a[10];
   a[0] = 'a';
   a[1] = 'b';
   a[2] = 'a';
   a[3] = 'c';
   int size = 4;
   deleteRepeats(a, size);
After this code is executed, the value of a[0] is 'a', the value of a[1] is 'b', the value of a[2] is 'c', and the value of size is 3. (The value of a[3] is no longer of any concern, since the partially filled array no longer uses this indexed variable.) You may assume that the partially filled array contains only lowercase letters. Embed your function in a suitable test program.
*/

#include <iostream>
using namespace std;

const int MAX_NUMBER_SCORES = 10;  	// for the purpose of this project, the array will be defined with 10 available spots. 

void fillArray(int a[], int size, int &numberUsed);  // this func fills the array with characters, one each position of the array
void deleteRepeats( int a[], int numberUsed);   // this func deletes characters repeated in the array and move as many
 						// positions is necesary to cover this holes. 
void nicePrint(int a[], int numberUsed);  	// make nicer print, not only the Ascii code

int main()
{
   int array[MAX_NUMBER_SCORES], numberUsed;
   cout << "This program delete repeated characters in an array \n";
  
   fillArray(array, MAX_NUMBER_SCORES, numberUsed);
   deleteRepeats(array, numberUsed);
   
   return 0;
}

void fillArray(int a[], int size, int &numberUsed)
{
   int index = 0;
   char word;
   ///*
   cout << "Enter up to " << size << " words (characters) and press the 'enter' key\n"
   	<< "Mark the end of the list with a number. \n";
   cin>> word; 
  //*/
   
  ///*
   while ((word >= 'a' && word <= 'z' ) && (index < size)) {
   	a[index] = word;
	index++;
	cin >> word;
   }
  // another way to enter the chars
  //*/ 
  /* 
   a[0] = 'a';
   a[1] = 'b';
   a[2] = 'd';
   a[3] = 'e';
   a[4] = 'b';
   a[5] = 'a';
   a[6] = 'z';
   a[7] = 'h';
   a[8] = 'j'; 
   index = 9;
  */
   numberUsed = index;

   cout << "*************************"<< endl;   // just for format 
   cout << "The array just entered is:\n";
   nicePrint(a,numberUsed);
}

void deleteRepeats( int a[], int numberUsed)
{
  
  for(int i=0; i <= numberUsed; i++)
  {
    for(int j=i+1; j <= numberUsed; j++)
     {
	if(a[j] == a[i])
	{
	   for(int k=j; k <= numberUsed-1; k++)
		a[k]=a[k+1];
	   j--;
	   numberUsed--;	
	}
     }
   }
   
   cout << "*************************"<< endl;   // just for format 
   cout << "After all is delete, here is the new array:\n";
   nicePrint(a,numberUsed);
   //for(int i=0; i<=numberUsed; i++)	// just the regualr printing
     //cout<< i+1 <<" value is --> " << a[i] << endl;
    
}

void nicePrint(int a[], int numberUsed) 
{
   for(int i=0; i<=numberUsed; i++)  
     if(a[i]== 97)
	cout<< i+1 <<" value is --> " << "a"<<endl;
     else if(a[i]== 98)
	cout<< i+1 <<" value is --> " << "b"<<endl;
     else if(a[i]== 99)
	cout<< i+1 <<" value is --> " << "c"<<endl;
     else if(a[i]== 100)
	cout<< i+1 <<" value is --> " << "d"<<endl;
     else if(a[i]== 101)
	cout<< i+1 <<" value is --> " << "e"<<endl; 
     else if(a[i]==102)
	cout<< i+1 <<" value is --> " << "f"<<endl;
     else if(a[i]== 103)
	cout<< i+1 <<" value is --> " << "g"<<endl;
     else if(a[i]== 104)
	cout<< i+1 <<" value is --> " << "h"<<endl;
     else if(a[i]== 105)
	cout<< i+1 <<" value is --> " << "i"<<endl;
     else if(a[i]== 106)
	cout<< i+1 <<" value is --> " << "j"<<endl;
     else if(a[i]== 107)
	cout<< i+1 <<" value is --> " << "k"<<endl;
     else if(a[i]== 108)
	cout<< i+1 <<" value is --> " << "l"<<endl;
     else if(a[i]== 109)
	cout<< i+1 <<" value is --> " << "m"<<endl;
     else if(a[i]== 110)
	cout<< i+1 <<" value is --> " << "n"<<endl;
     else if(a[i]== 111)
	cout<< i+1 <<" value is --> " << "o"<<endl;
     else if(a[i]== 112)
	cout<< i+1 <<" value is --> " << "p"<<endl;
     else if(a[i]== 113)
	cout<< i+1 <<" value is --> " << "q"<<endl;
     else if(a[i]== 114)
	cout<< i+1 <<" value is --> " << "r"<<endl;
     else if(a[i]== 115)
	cout<< i+1 <<" value is --> " << "s"<<endl;
     else if(a[i]== 116)
	cout<< i+1 <<" value is --> " << "t"<<endl;
     else if(a[i]== 117)
	cout<< i+1 <<" value is --> " << "u"<<endl;
     else if(a[i]== 118)
	cout<< i+1 <<" value is --> " << "v"<<endl;
     else if(a[i]== 119)
	cout<< i+1 <<" value is --> " << "w"<<endl;
     else if(a[i]== 120)
	cout<< i+1 <<" value is --> " << "x"<<endl;
     else if(a[i]== 121)
	cout<< i+1 <<" value is --> " << "y"<<endl;
     else if(a[i]== 122)
	cout<< i+1 <<" value is --> " << "z"<<endl;
}


