#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

int indexOfMax(int arr[],int n){
    int low=0,high=n-1,mid;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
        else if(arr[mid]<arr[mid+1] && arr[mid-1]<arr[mid])
        low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    cout<<"Enter the BioTonic Array: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int max_ind=indexOfMax(arr,n);
    cout<<max_ind<<" "<<endl;
    cout<<"Enter the element to search: ";
    int x;cin>>x;
    bool first=binary_search(arr,arr+max_ind,x);
    bool sec=binary_search(arr+max_ind,arr+n,x,comp);
    if(first || sec)
    cout<<"The element is present in the array! ";
    else cout<<"The element is not present in the array!";
}