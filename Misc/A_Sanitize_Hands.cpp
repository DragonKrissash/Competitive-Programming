#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;cin>>n>>h;
    vector<int>hands(n,0);
    for(int a=0;a<n;a++)
    cin>>hands[a];
    int aliens=0;
    for(int a=0;a<n;a++)
    {
        if(h>=hands[a]){
            h-=hands[a];
            aliens+=1;
        }
        else break;
    }
    cout<<aliens;
}