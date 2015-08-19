class Solution {
public:
    int n;
    int rob(vector<int>& nums) {
        n=nums.size();
        int m;
        int i;
        if(n==0)
            return 0;
        else if(n==1)
            return nums[0];
        else if(n==2)
            return max(nums[0],nums[1]);
        else{
            for(int i=0;i<n;i++){
                if(i==0)
                    nums[0]=nums[0];
                else if(i==1)
                    nums[1]=max(nums[1],nums[0]);
                else
                    nums[i]=max(nums[i-2]+nums[i],nums[i-1]);
            }
            return nums[n-1];
        }
    }
};
