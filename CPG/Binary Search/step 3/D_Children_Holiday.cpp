#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

void printbals(vector<int> &t,vector<int> &z,vector<int> &y,int time){
    for(int a=0;a<t.size();a++){
        int baltim=t[a]*z[a]+y[a];
        cout<<time/baltim * z[a]+(time%baltim)/t[a]<<" ";
    }

}

bool check(int time,vector<int> &t,vector<int> &z,vector<int> &y,int m){
    int bal=0;
    for(int a=0;a<t.size();a++){
        int baltim=t[a]*z[a]+y[a];
        bal+=time/baltim * z[a]+(time%baltim)/t[a];
        }
        return bal>=m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;cin>>m>>n;
    vector<int> t(n,0);
    vector<int> z(n,0);
    vector<int> y(n,0);
    for(int a=0;a<n;a++)
    {
        cin>>t[a]>>z[a]>>y[a];
    }
    int low=1,mid,high=100;
    int ans=0;
    for(int a=0;a<50;a++){
        mid=(low+high)/2;
        if(check(mid,t,z,y,m))
        {
            ans=mid;high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<ans<<"\n";

    printbals(t,z,y,ans);
}