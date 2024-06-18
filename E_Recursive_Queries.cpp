#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF = LLONG_MAX>>1;

int prodDig(int n){
    if(n==0)return 1;
    else if(n%10 == 0)return 1*prodDig(n/10);
    else return (n%10)*prodDig(n/10);
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;cin>>tc;
    while(tc--){
        int l,r,k;
        cin>>l>>r>>k;
        int count=0;
        for(int a=l;a<=r;a++){
            if(a>10){
                int prod=prodDig(a);
                while(prod>10){
                    prod=prodDig(prod);
                }
                if(prod==k)count++;
            }
            else {
                if(a==k)count++;
            }
            
        }
        cout<<count<<endl;
    }
}