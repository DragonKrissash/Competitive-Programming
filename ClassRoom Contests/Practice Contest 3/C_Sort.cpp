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

int charDif(string s,string t,int l,int r){
    sort(s.begin()+l,s.begin()+r);
    sort(t.begin()+l,t.begin()+r);
    // cout<<s<<" "<<t<<nl;
    map<char,int>mp;
    for(int i=l;i<=r;i++)mp[s[i]]++;
    for(int i=l;i<=r;i++)mp[t[i]]--;
    int ans=0;
    for(auto x:mp){
        if(x.Y<0)ans++;
    }
    return ans;
}

void solve(){
    int n,q;cin>>n>>q;
    string s,t;cin>>s>>t;
    for(int a=0;a<q;a++){
        int l,r;cin>>l>>r;
        cout<<charDif(s,t,l-1,r-1)<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}