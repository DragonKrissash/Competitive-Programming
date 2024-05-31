#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;cin>>t;
    for(int a=0;a<t;a++){
        int n;cin>>n;
        vector<ll>v1(n,0);
        for(int b=0;b<n;b++)
        cin>>v1[b];
        vector<ll>v2(n+1,0);
        for(int b=0;b<n+1;b++)
        cin>>v2[b];
        ll toadd=0;
        for(int b=0;b<n;b++)
        if(v1[b]<=v2[n])
        toadd=max(toadd,v1[b]);
        v1.push_back(toadd);
        bool y=false;
        int changes=1;
        for(int b=0;b<n+1;b++)
        {changes+=abs(v1[b]-v2[b]);
         if((v1[b]<v2[n] && v2[n]<v2[b]) ||(v1[b]>v2[n] && v2[n]>v2[b]))
         y=true;
        }
        if(y)changes-=1;
        cout<<changes<<"\n";
    }

}