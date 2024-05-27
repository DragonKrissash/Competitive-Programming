#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        int n,m;cin>>n>>m;
        if((n>m && (n-m)%2==0) || n==m)
        cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}