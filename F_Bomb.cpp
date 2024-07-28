#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    auto cmp=[](pair<int,int>&p,pair<int,int>&q){
        if(p.X==q.X){
            return p.Y>q.Y;
        }
        return p.X<q.X;
    };
    vector<pair<int,int>>v(n);
    for(int a=0;a<n;a++){
        cin>>v[a].X;
    }
    for(int a=0;a<n;a++){
        cin>>v[a].Y;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)>pq(cmp);
    for(int a=0;a<n;a++){
        pq.push(v[a]);
    }
    int ans=0;
    for(int a=0;a<k;a++){
        pair<int,int>temp=pq.top();
        pq.pop();
        ans+=temp.X;
        if(temp.X-temp.Y >=0){
            temp={temp.X-temp.Y,temp.Y};
        }
        else temp={0,temp.Y};
        pq.push(temp);
    }
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}