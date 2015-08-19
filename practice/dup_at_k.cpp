#include<map>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> dup;
        int i;
        for(i=0;i<nums.size();i++){
           map<int,int>::iterator it=dup.find(nums[i]);
           if(it!=dup.end()){
                int val1=it->second;
                if((i-val1)<=k){
                    return true;
                }
                else
                   dup[it->first]=i;
           }
            else{
                dup[nums[i]]=i;
            }
        }
        if(i==nums.size())
            return false;
    }
};
int main(){
    Solution S;
    vector<int> V;
    int val,k,n;
    cin>>n;		//values in vector
    for(int j=0;j<n;j++){
        cin>>val;
        V.push_back(val);
    }
    cin>>k;		//difference between indices can be atmost k
    bool b=S.containsNearbyDuplicate(V,k);
    cout<<b;
    return 0;
}
