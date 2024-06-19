#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int prodDig(int n){
    if(n==0)return 1;
    else if(n%10 == 0)return 1*prodDig(n/10);
    else return n%10 * prodDig(n/10);
}

int productDig(int n){
    while(n>=10)
    n=prodDig(n);
    return n;
}

signed main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    vector<vector<int>>mp(11,vector<int>((int)pow(10,6)+1,0));
    for(int a=1;a<10;a++){
        for(int b=1;b<=(int)pow(10,6)+1;b++){
            int dig=productDig(b);
            // cout<<mp[a][b-1]<<endl;
            if(dig==a)
            mp[a][b]=mp[a][b-1]+1;
            else
            mp[a][b]=mp[a][b-1];
        }
    }
    int tc;cin>>tc;
    while(tc--){
        int l,r,k;
        cin>>l>>r>>k;
        cout<<mp[k][r]-mp[k][l-1]<<endl;
    }
}