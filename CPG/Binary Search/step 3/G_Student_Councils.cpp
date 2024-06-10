#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;cin>>k>>n;
    int sum=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        sum+=x;
    }
    cout<<sum/k;
}