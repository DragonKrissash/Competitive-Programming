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
        int n;cin>>n;
        vector<long long>v(n,0);
        for(int a=0;a<n;a++){
            cin>>v[a];
        }
        vector<long long>pre(n,0);
        pre[0]=v[0];
        for(int a=1;a<n;a++)
        pre[a]=pre[a-1]+v[a];
        long long maxele=0;
        int count=0;
        for(int a=0;a<n;a++){
            maxele=max(maxele,v[a]);
            if(pre[a]==2*maxele)
            count++;
        }
        cout<<count<<"\n";
    }
}