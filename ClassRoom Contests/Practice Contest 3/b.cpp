#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);


void solve(){

    
    int n;cin>>n;
    if(n<38){
        cout<<"NO"<<nl;
        return;
    }
    n-=4;
    int N=(int)sqrt(n)+1;
    vector<bool>isPrime(N+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int a=2;a<=N;a++){
        if(isPrime[a]){
            for(int b=a*a;b<=N;b+=a){
                isPrime[b]=false;
            }
        }
    }
    for(int a=3;a<=N;a++){
        int b=sqrt(n-a*a);
        if(isPrime[a] and b!=2 and b!=a and (b*b)==(n-a*a) and isPrime[b]){
            cout<<"YES"<<nl;
            return;
        }
    }
    cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}