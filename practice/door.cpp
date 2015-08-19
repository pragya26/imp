#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
long int N;
cout<<"Enter the no of doors";
cin>>N;
cout<<"1	Door open(if closed initially) or vice versa"<<endl; 
for(long int i=2;i<=N;i++){
	long int count=0;
	int m;
	m=i/2;
	for(long int j=1;j<=m;j++){
		if(i%j==0)
			count++;
	}
	if(count%2==0)
		cout<<i<<"	Door open(if closed initially) or vice versa"<<endl;
	else
		cout<<i<<"	Door is in intial condition"<<endl;
		
}
return 0;
}		
	
	
