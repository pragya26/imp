#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/******************************************DYNAMIC PROGRAMMING APPROCH WITH REDUNDANT SUBSOLUTION********************************************* 
int countcoin(int S[],int m,int n){
    if(n == 0) //no value to get as sum
        return 1;
    if(n < 0)  //value we get as sum after choosing coin can not be less than 0
        return 0;
    if(m <=0 && n >= 1) //no coin choosen but has value to get as sum
        return 0;
    return countcoin(S,m-1,n)+countcoin(S,m,n-S[m-1]);
}
int main() {
    int N,M,c;
    cin>>N;
    cin>>M;
    int C[10000]={0};
    for(int i=0;i<M;i++){
        cin>>c;
        C[i]=c;
    }
    int count;
    count=countcoin(C,M,N);
    cout<<count<<endl;
    return 0;
}*/
/*************************************************STORING THE SUBSOLUTION TO AVOID REDUNDANCY************************************************/
long int countcoin( int S[], int m, int n ){
    long int table[n+1]={0};
    table[0] = 1;
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]]; /*This is to keep track tillnow there are how many ways to get tha value j. IN table[j] we have the count that in how many ways we can get the value using S[i] after that in next iteration value of s[i] changes and table[j-s[i]] will give the value that how many ways we can use the coin to get value j-s[i] using coin s[i] in different combination.*/
    return table[n];
}
int main(){
    int N,M,c;
    cin>>N;
    cin>>M;
    int C[10000]={0};
    for(int i=0;i<M;i++){
        cin>>c;
        C[i]=c;
    }
    long int count;
    count=countcoin(C,M,N);
    cout<<count<<endl;
    return 0;
}
