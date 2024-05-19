#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        vector<pair<int,int>>v;
        for(int a=0;a<n;a++)
        v.push_back({nums[a],a});
        sort(v.begin(),v.end());
        for(int a =0;a<n;a++){
            int other=target-v[a].first;
            bool y=binary_search(v.begin(),v.end(),other);
            if(y){
                ans.push_back(v[a].second);
                int b=distance(v.begin(),find(v.begin(),v.end(),other));
                ans.push_back(v[b].second);
                break;
            }
        }
        return ans;
    }
int main(){

}