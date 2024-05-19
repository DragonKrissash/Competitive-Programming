#include <bits/stdc++.h>
using namespace std;

    vector<bool> isArray(vector<int>& nums) {
        vector<bool>v;
        v.push_back(true);
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]%2==0 && nums[i-1]%2==0){
                v.push_back(false);
            }
            else if(nums[i]%2!=0 && nums[i-1]%2!=0){
                v.push_back(false);
            }
            else v.push_back(true);
        }
        return v;

    }

    vector<bool> isArraySpecial(vector<int>& nums,vector<vector<int>>& queries) {
        int n=nums.size();
        vector <bool>v=isArray(nums);
        vector<bool>ans;
        int q=queries.size();
        for(int i=0;i<q;i++){
            ans.push_back(v[queries[a][0]] && v[queries[a][1]]);
        }
        return ans;
        
    }
    int main(){
        vector<int>v={3,4,1,2,6};
        isArraySpecial(v);
    }