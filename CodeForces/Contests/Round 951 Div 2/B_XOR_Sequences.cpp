#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
using vi=vector<int>;
using ll=long long;
int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int temp=x^y;
        int ind=1;
        while(temp%2==0)
        {
            temp=temp>>1;
            ind=ind<<1;
        }
        cout<<ind<<"\n";
    }

}