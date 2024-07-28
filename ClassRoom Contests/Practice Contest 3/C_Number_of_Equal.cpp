#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int main()
{
   fastio
    int n,m;cin>>n>>m;
    map<int,pair<int,int>>mp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x].X++;
    }
    for(int a=0;a<m;a++){
        int x;cin>>x;
        mp[x].Y++;
    }
    int ans=0;
    for(auto [key,val]:mp){
        ans+=val.X*val.Y;
    }
    cout<<ans;
    
    // int cnt=0;
    // for(int j=0;j<m;j++){
    //     int ind=lower_bound(a.begin(),a.end(),b[j])-a.begin();
    //     int ind2=upper_bound(a.begin(),a.end(),b[j])-a.begin();
    //     cnt+=ind2-ind;
    // }
    // cout<<cnt<<endl;
}