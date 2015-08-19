#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
	vector<int> nums;
	int n;
	cin>>n;
	int m;
	for(int i=0;i<n;i++){
		cin>>m;
		nums.push_back(m);
	}
	int k;
	cin>>k;
         if((k>0)&&(nums.size()>0)){
            for(int i=0;i<k;i++){
                int val = nums.at(nums.size()-1);
                nums.insert(nums.begin(),val);//At begin position insert val and vector shifted to 1 position in right
                nums.pop_back();
            }
        }
	for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<"	";
	return 0;
}
