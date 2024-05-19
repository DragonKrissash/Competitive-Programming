#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[n];
    int big,small;int c=0;
    for(int a=0;a<n-1;a++){
        for(int b=a+1;b<n;b++)
        {big=max(arr[a],arr[b]);
        small=min(arr[a],arr[b]);
        if((big/2) > (2*small))
        c++;
        }
    }
    cout<<c;
}