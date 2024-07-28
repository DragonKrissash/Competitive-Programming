#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
   fastio
    int n,k;cin>>n>>k;
    vector<bool> isPrime(n+1,true);
    for(int a=2;a<=n;a++){
        if(isPrime[a]){
            for(int b=a;b<=n;b+=a)
            isPrime[b]=false;
        }
    }
    int cnt=0;
    for(int a=2;a<=n;a++){
        for(int b=2;b<=a;b++){
            if(isPrime[b] && isPrime[a-b-1])
            cnt++;
        }
    }
    cout<<cnt;
}