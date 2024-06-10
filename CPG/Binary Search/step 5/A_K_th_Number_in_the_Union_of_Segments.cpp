#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    vector<vector<int>>v;
    for(int a=0;a<n;a++){
        int l,r;cin>>l>>r;
        vector<int>va(r-l+1,0);
        for(int b=0;b<=r-l;b++)
        va[b]=l+b;
        v.push_back(va);
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<v[a].size();b++)
        cout<<v[a][b]<<" ";
        cout<<"\n";
    }

}