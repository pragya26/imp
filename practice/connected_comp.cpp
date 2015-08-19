#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int T;
    cout<<"Enter the test cases";
    cin>>T;
    for(int i=0;i<T;i++){
        int A[1000][1000],N,M;
        int B[1000][1000]={0};
        cout<<"Enter the no of rows";
        cin>>N;
        cout<<"Enter the no of columns";
        cin>>M;
        int ele,counter=0;
         for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                cout<<"Enter the elements";
                cin>>ele;
                A[j][k]=ele;
            }
        }
    queue<pair<int,int> > q1;
    cout<<"counter value    "<<counter<<endl;
    for(int j=0;j<N;j++){
        for(int k=0;k<M;k++){
            int ele1=A[j][k];
            //cout<<ele1;
            if(ele1){
                int ele2 = B[j][k];
                //cout<<ele2<<endl;
                if(!ele2){
                    //cout<<"HELLO"<<endl;
                    B[j][k]=1;
                    if(k+1<M){q1.push(make_pair(j,k+1));/*cout<<j<<"  "<<k+1<<endl;*/}
                    if(j+1<N){q1.push(make_pair(j+1,k));/*cout<<j+1<<"  "<<k<<endl;*/}
                    if((j-1>=0)){q1.push(make_pair(j-1,k));}
                    if((k-1>=0)){q1.push(make_pair(j,k-1));}
                   while(!q1.empty()){
                        pair<int,int> p = q1.front();
                        q1.pop();
                        int f,s;
                        f=p.first;s=p.second;
                        /*cout<<"operated on  "<<f<<"  "<<s<<endl;*/
                        int ele3 = A[f][s];
                        //cout<<ele3;
                        if(ele3){
                            int ele4 = B[f][s];
                            //.cout<<ele4;
                            if(!ele4){
                                B[f][s]=1;
                                if(s+1<M){q1.push(make_pair(f,s+1));/*cout<<f<<"  "<<s+1<<endl;*/}
                                if(f+1<N){q1.push(make_pair(f+1,s));/*cout<<f+1<<"  "<<s<<endl;*/}
                                if((f-1>=0)){q1.push(make_pair(f-1,s));}
                                if((s-1>=0)){q1.push(make_pair(f,s-1));}
                            }
                        }
                    }
                    if(q1.empty()){
                    counter++;
                    //cout<<"counter value    "<<counter<<endl;}
                }
                //else
                  // B[j][k]=1;//toavoid visiting same node again...
            }
        }
    }
    }
cout<<counter<<endl;
}
}
