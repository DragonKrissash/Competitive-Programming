#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)
    cin>>v[a];
    vector<int>vm(n,0);
    for(int a=0;a<n;a++)
    vm[a]=v[a];
    for(int a=0;a<m;a++)
    {int k;cin>>k;
    vm.push_back(k);}
    sort(vm.begin(),vm.end());
    bool y=false;
    sort(v.begin(),v.end());
    for(int a=0;a<n+m-1;a++)
    if(vm[a]+1==vm[a+1])
    {
        y=binary_search(v.begin(),v.end(),vm[a]);
        if(y)
        y=binary_search(v.begin(),v.end(),vm[a+1]);
        if(y)break;
    }

    if(y || n+m==1)cout<<"Yes";
    else cout<<"No";
}