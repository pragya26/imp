#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<ctype.h>
#include<string>
using namespace std;
int main() {   
    string str;
    cout<<"ENTER THE STRING";
    cin>>str;
    int k;
    cout<<"Enter value for incrementing";
    cin>>k;
    for(long int i=0; i<str.length();i++){
        int ascii;
	char x;
	x=str.at(i);		//Gives char value;
        if(isalpha(x)){
            ascii= x;		//assigning it to integer variable gives the ascii value of that character;
            if((ascii>64)&&(ascii<91)){
                ascii=ascii+k;
                if(ascii>90)
                    ascii=65+(ascii-90);
                    str[i]=(char)ascii;
        }
            if((ascii>96)&&(ascii<123)){
                 ascii=ascii+k;
                if(ascii>123)
                    ascii=96+(ascii-123);
                    str[i]=(char)ascii;
        }
        }
}
         for(int j=0;j<str.length();j++){
             cout<<str[j];
	}
    return 0;
}

/*using namespace std;
#include <string>
#include <sstream>
#include <iostream>

void convertToASCII(string letter)
{
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        cout << int(x) << endl;
    }
}
int main()
{
  string plainText;
cout << "Enter text to convert to ASCII: ";
getline(cin, plainText);
convertToASCII(plainText);
  return 0;
}*/
