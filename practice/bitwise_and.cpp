class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int mm=m,nn=n;
        if(m==n)
            return m;
        else if(m==0)
            return 0;
        else{
            int countm=0;
            int countn=0;
            while(nn){
                nn=nn/2;
                countn++;
                if(mm>0){
                    mm=mm/2;
                    countm++;
                }
            }
            if(countn==countm){
                long int val,mini=2147483647;
                for(long int i=m;i<n;i++){
                    val=i&(i+1);
                    if(mini>val)
                        mini=val;
                }
                return mini;
            }
            else
                return 0;
        }
    }
};
