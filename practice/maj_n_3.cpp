class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
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
      for(auto& x:map1){ //Helps in extraction keys and values form map.
           int count;
           count=x.second;
           if(count>nums.size()/3)
                V.push_back(x.first);       
       }
       return V;
     }
};
