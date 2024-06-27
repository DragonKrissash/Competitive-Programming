#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        bool y=false;
        ll c=min(a,s/n);
        if(s-c*n <=b)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}