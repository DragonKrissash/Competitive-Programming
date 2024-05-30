#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll mid,ll w,ll h,ll n){
    return ((mid/w)*(mid/h))>=n;
}

int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    ll w,h,n;
    cin>>w>>h>>n;
    ll low=0,high=1,mid;
    ll ans=0;
    while(check(high,w,h,n)==false)
    high*=2;
    while(high-low>1){
        mid=low+(high-low)/2;
        if(check(mid,w,h,n))
        {
            high=mid;
        }
        else low=mid;
    }
    if(check(low,w,h,n))
    cout<<low;
    else
    cout<<high;

}