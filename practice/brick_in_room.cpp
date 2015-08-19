#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int brick(int M){
    if(M==1){
        return 1;
    }
    else if(M==2){
        return 1;
    }
    else if(M==3){
        return 1;
    }
    else if(M==4){
        return 2;
    }
    return brick(M-1)+brick(M-4);
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    int N;
    //cout<<"Enter the length of block";
    cin>>N;
    //Now we have block of size 4XN and we have bricks of size 1X4 and 4X1;
    //We have to fond diff configuration which can be possible in that room using the given bricks;
    int count;
    count=brick(N);
    cout<<"possible configuration = "<<count;
}
}
