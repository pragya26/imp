#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    int i;
    for(i=0;i<nums.size();i++){
        if(i+1<nums.size()){
            int j=i+1;
            while(j-i<=k){                   //different between indices j and i should be less than equal to k
               if((nums[j]-nums[i])<=t){    //difference between value at position j and position i should be less than equal to t
                   return true;
               }
               else
                j++;
           }
        }}
        if(i==nums.size())
            return false;
    }
int main(){
vector<int> V;
int x,n;
cout<<"Enter the length of vector"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter the values"<<endl;
    cin>>x;
    V.push_back(x);
}
bool result=containsNearbyAlmostDuplicate(V,2,1);
cout<<result;
}
