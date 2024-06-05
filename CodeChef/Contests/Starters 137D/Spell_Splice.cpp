#include <bits/stdc++.h>
using namespace std;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) ((lli)(x).size())
#define eb emplace_back
#define X first
#define Y second
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vol;
        vector<int>str;
        for(int a=0;a<n;a++){
            int vi,ai;
            cin>>vi>>ai;
            vol.push_back(vi);
            str.push_back(ai);
        }
        int maxstr=0;
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                maxstr=max(maxstr,vol[a]*str[b]+vol[b]*str[a]);
            }
        }
        cout<<maxstr<<"\n";
    }
    
}