#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int minimumArea(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid.size();
     int leftone=INT32_MAX;
     int rightone=INT32_MIN;
     int upone=INT32_MAX;
     int lowone=INT32_MIN;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                leftone=min(leftone,j);
                rightone=max(rightone,j);
                upone=min(upone,i);
                lowone=max(lowone,i);
            }
        }
     }
     return (rightone-leftone+1)*(lowone-upone+1);
    }

int main()
{
   fastio

}