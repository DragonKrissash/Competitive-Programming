#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findxor(ll n,ll m){
    ll l=(n-m)>0?n-m:0;
    ll r=n+m;
    while(l<=r)
    l=l|(l+1);
    return l;
    }

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        ll n,m;cin>>n>>m;
        cout<<findxor(n,m)<<"\n";
    }

}