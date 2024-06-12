#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long x,y,z,k;
        cin>>x>>y>>z>>k;
        long long count=0;
        for(long long a=1;a<=x;a++)
        {
            for(long long b=1;b<=y;b++){
                if(k%(a*b)==0 && (k/(a*b))<=z)
                count=max(count,(x-a+1)*(y-b+1)*(z-k/(a*b)+1));
            }
        }
        cout<<count<<"\n";
    }
}