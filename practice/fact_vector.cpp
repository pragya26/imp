#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int case1; //To get through all the test cases
    for(case1 = 1; case1 <= cases; case1++) {
        int  N;
        cin >> N;
        vector<int> result;
        int carry=0,temp;
        result.push_back(1);
		for( int i=2;i<=N;i++){
			for(int j=0;j<result.size();j++){
			temp=carry+result[j]*i;    
			carry=temp/10;             
			result[j]=temp%10;		   
			}
			/* 38x4=(30x4)+(8x4)=120+32=152
			8x4=32 hence write "2" and 3 will be carry now
			3x4=12+(carry=3)=15 again write "5" and 1 will be carry which will later be added to get
			result "152"
			*/
			while(carry){
				result.push_back(carry%10);
				carry=carry/10;      //This will be for last bit multiplication, Carry will never be greater than 9 according to code so this will make carry=0
			}
		}
		for(int i = result.size()-1 ; i>=0 ; i--){
			cout<<result[i];
		}
		cout<<endl;
	}
		return 0;
}
