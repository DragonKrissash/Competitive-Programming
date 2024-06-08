#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector <int>el(n,0);
    for(int a=0;a<n;a++)
    cin>>el[a];
    stack<int>s;
    vector<int>left(n,-1);
    left[0]=1;
    for(int a=0;a<n;a++){
        while(!s.empty() && el[s.top()]>=el[a])
        s.pop();
        if(!s.empty())
        left[a]=a-s.top();
        s.push(a);
    }
    // for(int a=0;a<n;a++)
    // cout<<left[a]<<" ";
    while(!s.empty()) s.pop();
    vector<int>right(n,n);
    right[n-1]=1;
    for(int a=n-1;a>=0;a--){
        while(!s.empty() && el[s.top()]>=el[a])
        s.pop();
        if(!s.empty())
        right[a]=s.top()-a;
        s.push(a);
    }
    cout<<"\n";
    // for(int a=0;a<n;a++)
    // cout<<right[a]<<" ";
    int sum=0;
    for(int a=0;a<n;a++){
        sum+=left[a]*right[a]*el[a];
    }
    cout<<"The sum: "<<sum;
}