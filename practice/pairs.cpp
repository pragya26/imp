/*To count no of pairs such that A[i]=A[j] but i!=j*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   
    int T;
    cout<<"Enter the no of test cases";
    cin>>T;
    for(int i=0;i<T;i++){
        long int N=0,count=0;
        long int A[1000000]={};
        cout<<"Enter the no of elements in array";
        cin>>N;
	long int ele;
        for(long int e=0;e<N;e++){
            long int ele1;
  		    cin>>ele;
            ele1=ele%1000000;
		    A[ele1]=A[ele1]+1;
	}
	/*for(int m=0;m<1000000;m++){
		if(A[m]>1){
		cout<<A[m]<<endl;}
	}*/
        for(long int j=0;j<1000000;j++){
            if(A[j]>1){
		//cout<<count;
		 count=count+((A[j]-1)*A[j]);
		      }
		
        }
        cout<<count<<endl;
    }
    return 0;
}

