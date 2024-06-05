#include <bits/stdc++.h>
using namespace std;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) ((lli)(x).size())
#define eb emplace_back
#define X first
#define Y second
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;

int orangesRotting(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
     int maxtime=0;
     vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                queue<pair<int,int>>q;
                q.push({i,j});
                grid[i][j]=1;
                while (!q.empty())
                {auto [x,y]=q.front();
                    q.pop();
                    for(auto d:dir){
                        int nx=x+d.first;
                        int ny=y+d.second;
                        if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]==1)
                        {grid[nx][ny]=-grid[x][y]-1;
                        q.push({nx,ny});}
                    }
                }
            grid[i][j]=0;
            }
        }
     }
     bool imp=false;
     int a=0,b=0;
     for(a=0;a<n;a++){
        for(b=0;b<m;b++){
            maxtime=min(maxtime,grid[a][b]);
            if(grid[a][b]==1)
            imp=true;
        }
        if(imp)
        break;
     }   
     if (imp)return -1;
     else return -maxtime;
    }

int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i].push_back(x);
    }
    cout
}