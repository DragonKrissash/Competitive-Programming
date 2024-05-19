#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int a=0;a<t;a++){
        int n,k;
        cin>>n>>k;
        vector<long long> v(n,0);
        long long sum=0;
        for(int b=0;b<n;b++)
        {cin>>v[b];
        sum=sum+v[b];
        }
        sort(v.begin(),v.end());
        int l=0,h=n-1,m;
        int ans=-1;
        while(l<=h){
            m=l+(h-l)/2;
            if((v[m]+k)>(sum-v[m]))
            {
                ans=m;h=m-1;
            }
            else
            l=m+1;
        }
        if(ans==-1)
        cout<<0<<endl;
        else
        cout<<n-ans<<endl;
        
    }
}