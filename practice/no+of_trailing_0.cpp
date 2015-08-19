class Solution {
public:
    int trailingZeroes(int n) {
        int count =0;
            int i=1;
            while(n/pow(5,i)>0){
                count=count+ n/pow(5,i);
                i++;
            }
        return count;
    }
};
