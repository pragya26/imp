class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
               if(n%2!=0){//Each time if we have 1 at the end it will give result 1 after bitwise AND operation
                  count++; 
               } 
                n=n/2; //<< shift by 1 means division by 2 similarlly >> shift means multiplication by 2.
        }
        return count;
    }
};
