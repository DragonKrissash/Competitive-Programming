#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int l,r;
      cin>>l>>r;
      int c=0;
      while(r>1){
        c++;r/=2;
      }
      cout<<c<<"\n";
    }

}