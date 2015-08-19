#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int T;
    cin>>T;
    for(long int i=0;i<T;i++){
        long long int a,b,x,power,division;
        long long int diff1,diff2;
        cin>>a;
        cin>>b;
        cin>>x;
        power=pow(a,b);
        division=power/x;
        if(power>(x*division)){
            diff1=power-x*division;
        }
        else
            diff1=x*division-power;
        if(power>(x*(division+1))){
            diff2=power-(x*(division+1));
        }
        else
            diff2=(x*(division+1))-power;
        if(diff1<diff2)
            cout<<x*division<<endl;
        else
            cout<<x*(division+1)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

