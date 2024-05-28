#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,n) for(int a=i;a<n;a++)

// ll higher_bound(vector<ll>&v,int x){
//     ll n=v.size();
//     ll l=0,h=n-1,mid;
//     ll ans=h;
//     while(l<h){
//         mid=l+(h-l)/2;
//         if(v[mid]<=x){l=mid;}
//         else {h=mid;};
//     }
//     return h;
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
    for(ll a=0;a<n;a++){
        ll t;cin>>t;
        cout<<distance(v.begin(),upper_bound(v.begin(),v.end(),t))<<"\n";
    }
    }