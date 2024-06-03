#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>arr(n,0);
        for(int b=0;b<n;b++)
        cin>>arr[b];
        int favcube=arr[f-1];
        sort(arr.begin(),arr.end(),greater<int>());
        string ans="NO";
        // for(int b=0;b<n;b++)
        // cout<<arr[b]<<" ";
        // cout<<"\n";
        // cout<<favcube<<"\n";
        for(int b=0;b<k;b++){
            if(arr[b]==favcube){
                ans="YES";
            }
        }
        for(int b=k;b<n;b++){
            if(arr[b]==favcube && ans=="YES"){
                ans="MAYBE";
            }
        }
        cout<<ans<<"\n";
    }
  }
