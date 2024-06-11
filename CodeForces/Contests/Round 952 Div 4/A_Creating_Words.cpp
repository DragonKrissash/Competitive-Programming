#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<s2[0]+s1.substr(1)<<" "<<s1[0]+s2.substr(1)<<"\n";
    }
    
}