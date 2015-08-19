#include <iostream>
#include<vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
   int N,m;
   vector<int> A;
   vector<int> B;
/************************************************/
   cout<<"Enter size of array";
   cin>>N;
   for(int i=0;i<N;i++){
	cout<<"Enter no";
   	cin>>m;
	if(std::find(A.begin(), A.end(), m) != A.end()) {
   		//Do nothing;
   		} 
   else {
     A.push_back(m);
   }
   }
/*************************************************/
  int set_size=pow(2,A.size());
   int counter,j;
   for(counter=0;counter<set_size;counter++){
   	vector<int> C;
   	for(j=0;j<set_size;j++){
   		if(counter &(j<<1)){
   			C.push_back(A[j]);
   		}	
   	}
   	int fact=0;
   if(C.size()>=2){
   	fact=C[0]xor C[1];
   }
   else{
   fact=C[0];
   }
   for(int m=2;m<C.size();m++){
   	fact=fact xor C[m];
   }
   C.clear();
   B.push_back(fact);
}
/*************************************************/
int count =0;
for(int l=0;l<set_size;l++){
	for(int p=0;p<set_size;p++){
		if(B[l]==B[p]){
			count++;
		}
	}
	cout<<count;
}
 return 0;
}
