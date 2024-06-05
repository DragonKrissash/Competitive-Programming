#include <bits/stdc++.h>
using namespace std;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) ((lli)(x).size())
#define eb emplace_back
#define X first
#define Y second
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int> ans;
        int n=nums.size();
        for (int a=0;a<n;a++){
            while(!dq.empty() && nums[dq.back()]<=nums[a])
            {dq.pop_back();}
            dq.push_back(a);
            if(!dq.empty() && a-k>=dq.front())
            dq.pop_front();
            if(a>=k-1)
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }

int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
}