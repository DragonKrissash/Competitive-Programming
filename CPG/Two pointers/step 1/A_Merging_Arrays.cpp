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
   
    int n,m;cin>>n>>m;
    vector<int>a(n,0);
    vector<int>b(m,0);
    // cout<<"HI";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];

    vector<int>ab(n+m,0);
    int k=0,i=0,j=0;
    for(;i<n||j<m;){
        if(i>=n)
        ab[k++]=b[j++];
        else if(j>=n)
        ab[k++]=a[i++];
        else{
            if(a[i]<b[j])
            ab[k++]=a[i++];
            else 
            ab[k++]=b[j++];
        }
        
    }
    
    for(int c=0;c<n+m;c++)cout<<ab[c]<<" ";
}