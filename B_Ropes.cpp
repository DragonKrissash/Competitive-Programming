#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(float size,vector<int>&v,int k){
    int ropes=0;
    for(int a=0;a<v.size();a++){
        ropes+=v[a]/size;
    }
    return ropes>=k;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    float low=0,r=1000,ans=0;
    for(int a=0;a<n;a++)
    {cin>>v[a];}
    int t=100;
    while(t--){
        float size=(low+r)/2;
        if(check(size,v,k)){
            ans=size;low=size+1;
        }
        else r=size-1;
    }
    cout<<fixed<<setprecision(6);
    cout<<ans;
}