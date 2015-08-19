#include <iostream>
#include <string>
using namespace std;
main()
{
struct DataElement {
string SVal;
int    iVal;
bool   hasData;
DataElement()   // Example of a constructor used in a structure... This is default constructor which assigns value to i val and SVal
{
	iVal=-1;
	hasData=0;
	SVal="Example1";
}
} *RealData;	// Variable of Structure

RealData = new DataElement [ 5 ];

// Assignment

RealData[0].SVal = "Value loaded into first structure element.";
RealData[0].hasData = 1; // True
cout << "First element  0: " << RealData[0].SVal << endl;
cout << "                  " << RealData[0].hasData << endl;
cout << "Second element 1: " << RealData[1].SVal << endl;
cout << "                  " << RealData[1].hasData << endl; // Show effect of contructor
cout << "                  " << RealData[1].iVal    << endl; // Show effect of contructor
cout << "Third element 2: " << RealData[2].SVal << endl;
cout << "                  " << RealData[2].hasData << endl; // Show effect of contructor
cout << "                  " << RealData[2].iVal    << endl; // Show effect of contructor
delete [] RealData;   // Or:  delete [5] RealData;
}
