
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       int count=0;
        for(int i=0;i<32;i++){
                count = (count<<1) + (n%2);
                n=n/2;
	    }
        return count;
    }
};
