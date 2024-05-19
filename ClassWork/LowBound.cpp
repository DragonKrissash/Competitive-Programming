#include <bits/stdc++.h>
using namespace std;
int lower_bound(int arr[],int n,int x){
    int low=0,high=n-1,mid;int ans=high;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]<x)low=mid+1;
        else{
            high=mid-1;ans=high;
        }
    }
    return ans;
}
int higher_bound(int arr[],int n,int x){
    int low=0,high=n-1,mid;int ans=high;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]<=x){
            low=mid+1;ans=low;
        }
        else high=mid-1;
    }
    return ans+1;
}
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the element to find the lower bound: ";
    int x;cin>>x;
    cout<<lower_bound(arr,n,x)<<endl;
    cout<<higher_bound(arr,n,x);
}