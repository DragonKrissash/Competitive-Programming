#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

bool check(int ind,string t,string p,vector<int>&indices){
    for(int a=0;a<=ind;a++){
        t.erase(indices[a]-1,1);
    }
    for(int a=0;a<p.size();a++){
        if(t[a]==p[a])
        continue;
        else
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t,p;cin>>t>>p;
    vector<int>indices(t.size(),0);
    for(int a=0;a<t.size();a++){
        cin>>indices[a];
    }
    int low=0,high=t.size()-1,mid;
    int ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(check(mid,t,p,indices)){
            ans=mid,low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans+1;

}