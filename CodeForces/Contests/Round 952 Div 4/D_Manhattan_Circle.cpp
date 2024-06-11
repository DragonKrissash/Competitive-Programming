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
        int n,m;cin>>n>>m;
        char arr[n][m];

        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                cin>>arr[a][b];
            }
        }
        pair<int,int>maxrow={0,0};
        pair<int,int>count;
        for(int a=0;a<n;a++){
            count={a,0};
            for(int b=0;b<m;b++){
                if(arr[a][b]=='#')
                count.Y++;
            }
            if(maxrow.Y<count.Y){
                maxrow=count;
            }
        }
        pair<int,int>maxcol={0,0};
        for(int a=0;a<m;a++){
            count={a,0};
            for(int b=0;b<n;b++){
                if(arr[b][a]=='#')
                count.Y++;
            }
            if(maxcol.Y<count.Y){
                maxcol=count;
            }
        }
        cout<<maxrow.X+1<<" "<<maxcol.X+1<<"\n";
    }
}