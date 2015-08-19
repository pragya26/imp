class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map1;
        vector<int> V;
       for(int i=0;i<nums.size();i++){
           map<int,int>::iterator it = map1.find(nums[i]);
           if(it!=map1.end()){
               map1[nums[i]]=map1[nums[i]]+1;
           }
           else
               map1[nums[i]]=1;
        }
        int size;
       if(nums.size()%2==0)
            size=nums.size()/2;
       else
            size=nums.size()/2+1;
       for(auto& x:map1){ 
           int count;
           count=x.second;
           if(count>=size)
                return x.first;
       }
    }
};
