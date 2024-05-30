#include <bits/stdc++.h>
using namespace std;

bool binary_search(long long x,vector<long long>&v){
    int n=v.size();
    long long l=0,h=n-1;
    long long mid=0;
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==x)return true;
        else if(v[mid]<x)l=mid+1;
        else h=mid-1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int a=0;a<k;a++){
        long long x;
        cin>>x;
        if(binary_search(x,arr))
        cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}