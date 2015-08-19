class Solution {
public:
    int titleToNumber(string s){
        int length;
        int seqno=0;
        length=s.length();
        if(length==1)
            return s.at(0)-'A'+ 1;
        else{
            for(int i=0;i<s.length();i++){
                seqno=seqno+(s.at(i)-'A'+1)*pow(26,length-1);
                length--;
            }
        }
        return seqno;
    }
};

