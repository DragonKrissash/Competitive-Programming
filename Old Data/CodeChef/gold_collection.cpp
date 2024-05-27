#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a =0;a<t;a++){
        int n;
        cin>>n;
        int arr[n];
        for(int b=0;b<n;b++){
            cin>>arr[b];
            if(b>0)
            arr[b]+=arr[b-1];
        }
        int q;
        cin>>q;
        for(int b=0;b<q;b++){
            int i,j;
            cin>>i>>j;
            i--;j--;
            if(i==0)
            cout<<arr[j]<<endl;
            else
            cout<<arr[j]-arr[i-1]<<endl;
        }
    }
}