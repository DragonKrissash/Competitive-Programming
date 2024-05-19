#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=-99999,sumind=0;
        int n=nums.size();
        for (int a=0;a<n;a++)
        {
            if(sum+nums[a]>nums[a]){
                sum=sum+nums[a];
            }
            else{
                sum=nums[a];
            }
            if(sum>maxsum)maxsum=sum;
        }
        return maxsum;
    }

int main(){

}