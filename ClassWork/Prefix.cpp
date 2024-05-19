#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int prefix[n];
    sort(arr,arr+n);
    prefix[0]=arr[0];
    for(int a=1;a<n;a++)
    prefix[a]=prefix[a-1]+arr[a];
    for(int a=0;a<n;a++)
    cout<<prefix[a]<<" ";
}