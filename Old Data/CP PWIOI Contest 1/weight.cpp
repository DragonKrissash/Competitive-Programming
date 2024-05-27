#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=1;a<=t;a++){
        int n;int k;
        cin>>n>>k;
        vector<int>arr(n,0);
        int max=0;
        int max2=0;
        for(int b=0;b<n;b++)
        cin>>arr[b];
        sort(arr.begin(),arr.end());
        max=arr[n-1];
        for(int b=0;b<n;b++)
        if(arr[b]<=k)
        max2=arr[b];
        cout<<max+max2<<endl;
        
    }
}