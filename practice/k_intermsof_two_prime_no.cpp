#include <iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    	int n;
    	bool b1=false;
    	bool b2=false;
    	cin>>n;
    	int den1=2;
    	int den2;
    	for(int j=2;j<=n/2;j++){
    		if((j%den1==0)&&(j!=2)){
    			b1=false;
    			den1++;
    		}
    		else{
    			den1=2;
    			den2=2;
    			b1=true;
    			b2=false;
    			int x;
    			x=n-j;
    			while(den2<x/2){
    			//for(int k=x;k<=n;k++){
    				if((x%den2==0)&&(x!=2)){
    					b2=false;
    					den2++;
    				}
    				else{
    					b2=true;
    					break;
    				}
    			}
    		}
 				if(b1==true&&b2==true)
    				break;
    		}
    		if(b1==true&&b2==true)
    			cout<<"Deepa"<<endl;
    		else
    			cout<<"Arjit"<<endl;
    }
    return 0;
}
