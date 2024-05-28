#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,n) for(int a=i;a<n;a++)
 
int lower_bound(vector<int>&v,int x){
    int n=v.size();
    int l=0,h=n-1,mid;
    int ans=0;
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]<=x){ans=mid+1;l=mid+1;}
        else h=mid-1;
    }
    return ans;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    for(int a=0;a<k;a++){
        int t;cin>>t;
        cout<<lower_bound(v,t)<<"\n";
    }
    }