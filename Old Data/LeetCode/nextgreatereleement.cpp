#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
     int n=nums.size();
     vector<int>ans(n,-1);
     stack<int>st;
     for(int a=0;a<n;a++){
        while(!st.empty() && nums[st.top()]<nums[a]){
            ans[st.top()]=nums[a];
            st.pop();
        }
        st.push(a);
     }
     for(int a=n-1;a>=0;a--){
        while(!st.empty() && nums[st.top()]<nums[a]){
            if(ans[st.top()]<nums[a])
            ans[st.top()]=nums[a];
            st.pop();
        }
        st.push(a);
     }
    return ans;
    }

int main(){
    vector<int>nums={1,2,1};
    vector<int>ans=nextGreaterElements(nums);
    cout<<"\n";
    for(auto a:ans){
        cout<<a<<" ";
    }
}