#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findxor(ll n,ll m){
    if(m==0)
    return n;
    else if(n==0)
    return findxor(0,m-1)|findxor(1,m-1);
    else return findxor(n-1,m-1)|findxor(n,m-1)|findxor(n+1,m-1);
}

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        ll n,m;cin>>n>>m;
        cout<<findxor(n,m)<<"\n";
    }

}