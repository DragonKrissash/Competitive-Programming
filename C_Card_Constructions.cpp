#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


bool check(int ht,int n){
    return (3*ht*ht+ht)/2 <=n;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int lo=0,hi=n;
        int ans=1;
        while(true){
            int cards=(3*ans*ans+ans)/2;
            if(cards<=n)
            {ans+=1;continue;}
            else break;
        }
        int count=0;
        while(ans>0 && n>1){
            int cards=(3*ans*ans+ans)/2;

            count+=n/cards;
            n=n%cards;
            ans-=1;
        }

        cout<<count<<"\n";
    }
}