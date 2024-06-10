#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

void backtrack(vector<vector<int>> &result,vector<int>&perm,vector<int>&nums){
    if(perm.size()==nums.size()){
        result.push_back(perm);
        return;
    }
    for(int a=0;a<nums.size();a++){
        if(find(perm.begin(),perm.end(),nums[a]) != perm.end())
        continue;
        perm.push_back(nums[a]);
        backtrack(result,perm,nums);
        perm.pop_back();
    }
 }

vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>perm;
        backtrack(result,perm,nums);
        return result;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}