#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int n,m;

bool isVal(int i,int j){
    if(i<0 || j<0 || i>=n || j>=m) return false;
    else return true;
}

bool check(int i,int j){
    if(isVal(i-1,j-1)&&isVal(i+1))
}

int main()
{
   fastio
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>('a',m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>v[i][j];
    int ans=0;
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
      {if(v[i][j]=='f' && check(i,j))
        {
            ans+=1;
        }
      }
    }
}