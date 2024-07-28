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
    char arr[n][n];
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cin>>arr[a][b];
        }
    }
    for(int a=0;a<n;a+=k){
        for(int b=0;b<n;b+=k){
            cout<<arr[a][b];
        }
        cout<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}