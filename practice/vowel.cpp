#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N,a,b;
	cout<<"enter the value";
	cin>>N;
	for(int i=0; i<N;i++){
		std::string str; 
		cout<<"enter the string";
		cin>>str;
		int count=0;
		for(int j=0;j<str.size();j++){
			std::string c;
			c=str.at(j);
			if((c.compare("a"))&&(c.compare("e"))&&(c.compare("i"))&&(c.compare("o"))&&(c.compare("u"))){
				//do nothing;
				count++;
			
			}
			
		}
			b=count-3; //to count "o" from .com and subtract www.
			a=str.size();
			cout<<b<<"/"<<a<<endl;
				
	}
}

