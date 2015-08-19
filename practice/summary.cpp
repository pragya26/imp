#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> summary;
    if(nums.size()!=0){
        string low = std::to_string(nums[0]);
        string high;
        int i=0;
        while(i<nums.size()-1){
            if(nums[i+1]!=nums[i]+1){
                high = std::to_string(nums[i]);
                if((low!=high)&&(high!="")&&(low!=""))
                    summary.push_back(low+"->"+high);
                else
                    summary.push_back(low);
                low = nums[i+1];
            }
                i++;
        }
        high = std::to_string(nums[i]);
        if((low!=high)&&(low!=""))
            summary.push_back(low+"->"+high);
        else
            summary.push_back(low);
        return summary;
    }
}
int main(){
    vector<int> V;
    int x;
    for(int i=0;i<7;i++){
        cin>>x;
        V.push_back(x);
    }
    vector<string> STR;
    STR = summaryRanges(V);
    for(int i=0;i<STR.size();i++)
        cout<<STR[i]<<endl;
}
