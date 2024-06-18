#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)



int main()
{
   fastio;
    int a,b,c;
    cin>>a>>b>>c;
    int initime=(a*c-b*c)/b;
    if((initime*b+c*b)>=a*c)
    cout<<initime;
    else cout<<initime+1;
}