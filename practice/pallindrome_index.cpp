#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int k=0;k<T;k++){
     string str2;
	//cout<<"Enter the string";
        cin>>str2;
	vector<char> A;
	vector<char> B;
        for(int i=0;i<str2.length();i++){
		char z;
		z=str2.at(i);
		A.push_back(z);
		B.push_back(z);
	}
int x;
reverse(B.begin(),B.end());
for(int m=0;m<B.size();m++){
	if(A[m]!=B[m]){
        if((m==(B.size()/2-1))&&(A[m]==B[m+1])&&(A[m+1]==B[m])){
            x=-1;
            break;
        }
		if((A[m]==B[m+1])&(A[m+1]==B[m+2])){
			x=B.size()-(m+1);
			break;
		}
        else{
            x=m;
            break;
        }
		if(A[m+1]==B[m]){
			x=m;
			break;
		}
	}
	else
		x=-1;
}
cout<<x<<endl;
}
return 0;
}

