#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bfs(int i, int j,vector<vector<char>>& grid){
    queue<pair<int, int>> q;
    q.push({i, j});
    int n=grid.size();
    int m=grid[0].size();
    while (!q.empty()){
        int x = q.front().first;
        int y= q.front().second;
        grid[x][y]=0;
        q.pop();
        if(x-1>=0 && grid[x-1][y]=='1')
        q.push({x-1, y});
        if(x+1<=n-1 && grid[x+1][y]=='1')
        q.push({x+1,y});
        if(y-1>=0 && grid[x][y-1]=='1')
        q.push({x,y-1});
        if(y+1<=m-1 && grid[x][y+1]=='1')
        q.push({x,y+1});
    }

}

int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]=='1'){
                    c++;
                    bfs(i,j,grid);
                }
            }
        }
        return c;

    }

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}