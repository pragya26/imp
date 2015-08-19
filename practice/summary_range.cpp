class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summary;
        if(nums.size()!=0){
            int i=0;
            while(i<nums.size()){
                int val = nums[i];
                    while((nums[i+1]==nums[i]+1)&&(i+1<nums.size()))
                        i++;
                    if((to_string(val)!="")&&(to_string(nums[i])!="")&&(to_string(val)!=to_string(nums[i])))
                        summary.push_back(to_string(val)+"->"+to_string(nums[i]));
                    else
                        summary.push_back(to_string(nums[i]));
                    i++;
            }
        }
           return summary;
    }
    
};

