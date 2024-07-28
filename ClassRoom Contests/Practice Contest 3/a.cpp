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
    int n,q;
    cin>>n>>q;
    map<int,int>mp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x]++;
    }
    for(int a=0;a<q;a++){
        string s;int x;cin>>s>>x;
        if(s=="DEL"){
            mp[x]--;
            if(mp[x]==0)mp.erase(x);
            cout<<(*mp.rbegin()).first-(*mp.begin()).first<<nl;
        }
        else{
            mp[x]++;
            cout<<(*mp.rbegin()).first-(*mp.begin()).first<<nl;
        }
    }
    
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}