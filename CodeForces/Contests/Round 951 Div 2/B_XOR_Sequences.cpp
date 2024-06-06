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
        long long x,y;
        cin>>x>>y;
        long long length=0;
        bool istru=false;
        vector<long long>xv(10000,0);
        vector<long long>yv(10000,0);
        for(long long a=1;a<10000;a++)
        {
            xv[a-1]=x^a;
            yv[a-1]=y^a;
        }
        for(int a=1;a<10000;a++)
        {       if(xv[a-1]==yv[a-1])
            length++;
        }
        cout<<length<<"\n";
    }

}