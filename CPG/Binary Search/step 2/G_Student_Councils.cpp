#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

bool good(int mid,vector<int>&a,int k){
    int temp=mid;
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=min(mid,a[i]);
    }
    return sum>=mid*k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    cin>>k>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lo=0,hi=1e5;
    while(lo+1<hi){
        int mid=(lo+hi)/2;
        if(good(mid,a,k))
        lo=mid;
        else hi=mid;
    }
    cout<<lo;
}