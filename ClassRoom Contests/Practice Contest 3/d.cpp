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
    int n,m;cin>>n>>m;
    vector<double> pro(n);
    input(pro);
    vi men(n);
    input(men);
    cout<<fixed<<setprecision(9);
    double totpro=0;
    for(int a=0;a<n;a++){
        if(men[a]>=m){
            totpro+=pro[a];
        }
    }
    for(int a=0;a<n;a++){

    }
    for(int a=0;a<n;a++){
        if(men[a]<m)
        cout<<0.000000<<" ";
        else{
            cout<<pro[a]/totpro<<" ";
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