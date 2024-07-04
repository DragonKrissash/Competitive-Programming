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
    int n,m;
    cin>>n>>m;
    vector<int>v1(n,0);
    vector<int>v2(m,0);
    for(int a=0;a<n;a++)
    cin>>v1[a];
    for(int a=0;a<m;a++)
    cin>>v2[a];
    for(int a=0;a<m;a++){
        cout<<abs(v1.begin()-lower_bound(v1.begin(),v1.end(),v2[a]))<<" ";
    }
}