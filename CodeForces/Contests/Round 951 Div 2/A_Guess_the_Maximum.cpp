#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>v(n,0);
        for(int a=0;a<n;a++)
        cin>>v[a];
        long long ans=INT32_MAX;
        for(int a=0;a<n-1;a++){
            ans=min(ans,max(v[a],v[a+1]));
        }
        cout<<ans-1<<"\n";
    }
}