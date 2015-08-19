#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<stack>
#include<string>
using namespace std;
int main(){
char x;
std::stack<char> A;  
cout<< "Enter the input here" << endl;
while((x=cin.get())and(x!='.'))
{
A.push(x);
cout<<x; 
}
int size;
size=A.size();
std::stack<char>B;
for(int i=0;i<size;i++)
{
char m;
m=A.top();
cout<<m;
A.pop();
}
return 0;
}

