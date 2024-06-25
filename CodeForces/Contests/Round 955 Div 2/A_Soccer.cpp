#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 && y1==y2){
            cout<<"YES"<<endl;
        }
        else{
            if(x1==x2 || y1==y2){
                if(x1==x2 && y1>x1)
                cout<<"YES"<<endl;
                else if(x1==x2 && y1<x1)
                {
                    if(y2<x1)
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else if(y1==y2 && x1>y1)
                cout<<"YES"<<endl;
                else if(y1==y2 && x1<y1)
                {
                    if(x2<y1)
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else if((x1<y1 && x2<y2)||(y1<x1 && y2<x2))
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}