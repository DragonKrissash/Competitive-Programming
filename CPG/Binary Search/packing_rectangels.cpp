#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll w,h,n;
    cin>>w>>h>>n;
    ll l=0,r=max(w,h)*n,mid;
    while(l<r){
        mid=l+(r-l)/2;
        if((mid/w)*(mid/h)>=n)r=mid-1;
        else l=mid+1;
    }
    cout<<mid;
}