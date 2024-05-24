#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
     int n=nums.size();
     vector<int>ans(2*n,-1);
     stack<int>st;
     for(int a=0;a<n;a++)
     nums.push_back(nums[a]);
     for(int a=2*n-1;a>=0;a--){
        while(!st.empty() && st.top()<=nums[a])
        if(!st.empty())
        ans[a]=st.top();
        st.push(nums[a]);
     }
     ans.resize(n);
    return ans;
    }
int main(){
    vector<int>nums={5,4,3,2,1};
    vector<int>ans=nextGreaterElements(nums);
    cout<<"\n";
    for(auto a:ans){
        cout<<a<<" ";
    }
}