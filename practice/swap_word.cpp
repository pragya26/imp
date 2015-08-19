#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin>>T;
    for(int i=0; i<=T;i++){
    string str;
    std::getline(cin,str);
    stack<string> str2;
    string x="";
    for(int i=0;i<str.length();i++){
    	char m = str.at(i);
    	if(m!=' ')
		{
    		x=x+m;}
    	else{	
    		str2.push(x);
    		str2.push(" ");
    		x="";
    	}
    }
	str2.push(x);
    while(!str2.empty()){
    	cout<<str2.top();
    	str2.pop();
    }
	cout<<endl;
    }
}

