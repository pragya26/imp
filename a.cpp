#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	//cout<<"enter value";
	cin>>T;
	for(int i=0;i<=T;i++){
		int max=0,N,k;
		int m;
		vector<int> A;
		//cout<<"enter value";
		cin>>N;
		//cout<<"enter value";
		cin>>k;
		for(int j=0;j<N;j++){
			//cout<<"enter value";
			cin>>m;
			A.push_back(m);
		}
		int max1=0;
		for(int j=0;j<A.size();j++){
			int l;
			max=A[j];
			if(i+k+1<A.size()){
				l=j+k+1;
			while(l<A.size()){
				if((max<0)&&(A[l]>=0)){
					max=A[l];
					l=l+k+1;
					//cout<<max;
				}

				else if((max<0)&&(A[l]<0)&&(max<A[l])){
					max=0;
					//cout<<max;
					l=l+1;
				}
				else{
					max=max+A[l];
					//cout<<max;
					l=l+k+1;
				}
			}
			if(max>max1){
				max1=max;
			}}
		}
		if(max1>=0){
			cout<<max1<<endl;
		}
	}
}

