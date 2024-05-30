#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// int upper_bound(vector<ll>&v,ll x){
//     ll n=v.size();
//     ll l=0,h=n-1,m;
//     ll ans=n+1;
//     while(l<h){
//         m=l+(h-l)/2;
//         if(v[m]>=x){ans=h;h=m-1;}
//         else l=m+1;
//     }
//     return ans;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    for(ll a=0;a<n;a++){
        cin>>v[a];
    }
    for(ll a=0;a<k;a++){
        ll t;cin>>t;

        cout<<distance(v.begin(),lower_bound(v.begin(),v.end(),t))+1<<"\n";
    }
    }