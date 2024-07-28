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
    int a=n+1;
    for(;;a++){
        if(a%k==0)
        break;
    }
    cout<<a<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}