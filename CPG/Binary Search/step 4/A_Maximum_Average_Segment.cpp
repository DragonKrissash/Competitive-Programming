#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;cin>>n>>d;
    vector<int>v(n,0);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    vector<int>vsum(n,0);
    vsum[0]=v[0];
    for(int a=1;a<n;a++)
    vsum[a]=v[a]+v[a-1];
    int low=0,mid,high=n-1-d;
    int ans=0;
    while(high-low>1){
        mid=(low+high)/2;
        if(vsum[mid]<=vsum[n-1] && mid<=n-1-d)
        {
            ans=mid;mid=low;
        }
        else mid=high;
    }
}