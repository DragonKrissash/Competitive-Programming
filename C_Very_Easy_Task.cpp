#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x,y;
int n;
bool check(int time){
    if(time<min(x,y))
    return false;
    int ini=time-min(x,y);
    int copies=ini/x+ini/y +1;
    return copies>=n;
}

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n>>x>>y;
  int low=0,high=max(x,y)*n,mid;
  while(high-low>1){
    mid=low+(high-low)/2;
    if(check(mid))
    high=mid;
    else low=mid;
  }
  cout<<high;
}