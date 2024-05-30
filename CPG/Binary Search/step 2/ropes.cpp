#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll size,vector<ll>&v,int k){
    ll sum=0;
    for(int a=0;a<v.size();a++){
        sum+=v[a]/size;
    }
    return sum>=k;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    ll low=0,r=1000,ans=0;
    for(int a=0;a<n;a++)
    {cin>>v[a];r=min(v[a],r);
    }
    while(low<r){
        ll size=(low+r)/2;
        if(check(size,v,k)){
            low=size;ans=size;
        }
        else r=size;
    }
    cout<<"The answer";
}