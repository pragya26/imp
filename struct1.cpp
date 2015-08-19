#include <iostream>
#include <string>
using namespace std;
struct dataElement {
   string SVal;
   int    iVal;
   bool   hasData;
dataElement()   // Example of a constructor used in a structure.
      {
	iVal=-1;
        hasData=0;
      }
};//DataElement;// otherwise not able to access struct
main()
{
    //DataElement *RealData;// variable of struct DataElement type
    dataElement* RealData = new dataElement[5];

    RealData[0].SVal = "Value loaded into first structure element.";
    RealData[0].hasData = 1; // True

    cout << "First element  0: " << RealData[0].SVal << endl;
    cout << "                  " << RealData[0].hasData << endl;
    cout << "Second element 1: " << RealData[1].SVal << endl;
    cout << "                  " << RealData[1].hasData << endl; // Show effect of contructor
    cout << "                  " << RealData[1].iVal    << endl; // Show effect of contructor

    delete [] RealData;   // Or:  delete [5] RealData;
}
