#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

void backtrack(vector<vector<int>>&result,vector<int>&com,vector<int>&nums){
    if(com.size()==nums.size()){
        result.push_back(com);
        return;
    }
    for(int a=0;a<nums.size();a++){
        if(find(com.begin(),com.end(),nums[a])!=com.end())
        continue;
        com.push_back(nums[a]);
        backtrack(result,com,nums);
        com.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        vector<int>com;
        vector<int>nums(n,0);
        for(int a=0;a<n;a++)
        nums[a]=a+1;
        backtrack(result,com,nums);
        return result;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}