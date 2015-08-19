#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int n;
	cin>>n;
        string str="";
        string A[26];
        A[0]='Z';
        char val = 'A';
        for(int i=1;i<26;i++){
            A[i]=val;
            val++;
        }
        std::stack<int> S;
        while(n){
            int c = n%26;
            S.push(c);
	    if(n==26)
		break;
	    if((n%26==0)&&(n/26>1))
		for(int i=0;i<n/26;i++)
			S.push(1);
		break;
	    else	
            	n=n/26;
        }
        while(!S.empty()){
           int ch1 = S.top();
           string ch2=A[ch1];
           S.pop();
           str.append(ch2);
        }
        cout<<str;
	return 0; 
}
