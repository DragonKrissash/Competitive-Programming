#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fastSearch(vector<ll>&v,ll low,ll r){
    auto rind=upper_bound(v.begin(),v.end(),r);
    auto lind=lower_bound(v.begin(),v.end(),low);
    return distance(lind,rind);
}

int main(){
    int n;cin>>n;
    vector<ll>v(n,0);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    int k;cin>>k;
    sort(v.begin(),v.end());
    for(int a=0;a<k;a++){
        ll low,r;
        cin>>low>>r;
        cout<<fastSearch(v,low,r)<<" ";
    }
}