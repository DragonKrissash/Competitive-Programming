#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float c;cin>>c;
    double low=0,high=INT32_MAX;int t=100;
    double ans=0.0;
    while(t--){
        double mid=(low+high)/2.0;
        if(mid*mid+sqrt(mid)>=c){
            ans=mid;high=mid;
        }
        else low=mid;
    }
    cout<<fixed<<setprecision(15);
    cout<<ans;
}