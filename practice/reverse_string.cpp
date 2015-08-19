#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<=T;i++){		
    	string str;
    	stack<char> str1;
    	std::getline(cin,str);
    	for(int j=0;j<str.length();j++){
    		str1.push(str[j]);
    	}
    while(!str1.empty()){
    	cout<<str1.top();
    	str1.pop();
    }
    cout<<endl;
    	}
   return 0;
}

