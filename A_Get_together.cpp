#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

bool isPossible(double midtime,vector<long long>&x,vector<long long>&v){
    double left=-1e9,right=1e9;
    for(int a=0;a<x.size();a++){
        auto l=x[a]-midtime*v[a];
        auto r=x[a]+midtime*v[a];
        if(l>right || r<left)
        return false;
        left=max(left,l);
        right=min(right,r);
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<long long> x(n,0);
    vector<long long> v(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>v[i];
    }
    double lo=-0.1,hi=1e9;
    int loop=100;
    double ans;
    while (loop--)
    {
        double mid=(lo+hi)/2.0;
        if(isPossible(mid,x,v))
        hi=mid;
        else lo=mid;

    }
    cout<<fixed<<setprecision(1);
    cout<<hi;
    
}