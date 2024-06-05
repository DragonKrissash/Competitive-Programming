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

int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        int ml=999;
        int sum=0;
        for(int a=0;a<n;a++){
            dq.push_back(nums[a]);
                sum+=nums[a];
            while(sum>=k)
            {   int dl=dq.size();
                ml=min(ml,dl);
                sum=sum-dq.front();
                dq.pop_front();
            }
                

        }
        return ml==999? -1:ml;
    }
int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>v={2,-1,2,3,-4,5};
cout<<shortestSubarray(v,3);
}