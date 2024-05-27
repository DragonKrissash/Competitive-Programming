#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    int x;cin>>x;
    cout<<binary_search(arr,arr+n,x,comp);
}