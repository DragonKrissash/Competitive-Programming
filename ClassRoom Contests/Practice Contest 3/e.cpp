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
    string s;cin>>s;
    int n=s.size();
    char mini='z';
    string ans="";
    int ind=0;
    for(int a=0;a<n-1;a++){
        if(s[a]<mini){
            mini=s[a];
            ind=a;
        }
    }
    ans+=mini;
    mini='z';
    for(int a=ind+1;a<n;a++){
        mini=min(mini,s[a]);
    }
    ans+=mini;
    cout<<ans<<nl;

    
}
signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}