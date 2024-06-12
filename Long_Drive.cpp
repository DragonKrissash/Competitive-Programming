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
    while(t--){
        int s1,s2;
        cin>>s1>>s2;
        int time=0;
        for(int a=100;a>=50;a--){
            if((10*s1-10*s2)%(s2-a)==0)
            {time=(10*s1-10*s2)/(s2-a);
            break;}
        }
        cout<<time<<"\n";
    }
}
