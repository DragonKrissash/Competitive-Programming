#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

void solveMaze(vector<string>&ans,int r,int c,vector<vector<int>> &m,int n,string p,vector<vector<bool>>vis){
    if(r==n-1 && c==n-1 && m[r][c]!=0){
        ans.push_back(p);
        return;
    }
    if(r>=0 && r<n and c>=0 and c<n){
    if(vis[r][c]==true || m[r][c]==0)
    return;
    vis[r][c]=true;
    solveMaze(ans,r-1,c,m,n,p+'U',vis);//up
    solveMaze(ans,r+1,c,m,n,p+'D',vis);//down
    solveMaze(ans,r,c-1,m,n,p+'L',vis);//left
    solveMaze(ans,r,c+1,m,n,p+'R',vis);//right
    vis[r][c]=false;
    }
}

vector<string> findPath(vector<vector<int>> &m, int n) {
     vector<string>ans;
     vector<vector<bool>>vis(n,vector<bool>(n,false));
     solveMaze(ans,0,0,m,n,"",vis);
     return ans;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}