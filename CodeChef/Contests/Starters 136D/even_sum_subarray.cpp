#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=0;a<t;a++){
        int n;
        cin>>n;
        int arr[n];
        for(int b=0;b<n;b++){
            cin>>arr[b];
        }
        int pre[n];
        pre[0]=arr[0];
        int suf[n];
        suf[n-1]=arr[n-1];
        for(int b=1;b<n;b++)
        {
            pre[b]=pre[b-1]+arr[b];
        }
        for(int b=n-2;b>=0;b--)
        suf[b]=suf[b+1]+arr[b];
        int sum=0,numele=0;
        for(int b=0;b<n;b++)
        {
            if(pre[b]%2==0 && pre[b]>sum)
            {
                numele=b+1;
                sum=pre[b];
            }
        }
        for(int b=n-1;b>=0;b--){
            if(suf[b]%2==0 && suf[b]>sum)
            {
                numele=n-b;
                sum=suf[b];
            }
        }
        cout<<numele<<"\n";
    }
}