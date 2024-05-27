#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n,0);
    vector<int>ans(n,0);
    for (int a=0;a<n;a++)
    cin>>v[a];
    stack<int>s;
    for(int a=0;a<n;a++){
        while(!s.empty() && v[s.top()]<v[a])
            {ans[s.top()]=a;s.pop();}
        s.push(a);
    }
    while(!s.empty())
        {ans[s.top()]=n;s.pop();}
    for(int a=0;a<n;a++)
    cout<<ans[a]<<" ";
}