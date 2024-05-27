#include <bits/stdc++.h>
using namespace std;
int findIndexMax(int arr[],int n){
    int low=0,high=n-1,mid,first=arr[0];
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) 
        return mid;
        else if (arr[mid] > first) 
        low=mid;
        else  
        high = mid;
    }
    return -1;
}
int main(){
    cout<<"Enter the number of elements in the array: ";
    int n;cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int index=findIndexMax(arr,n);
    cout<<"Enter the element to be searched: ";
    int x;cin>>x;
    bool is_present=false;
    if(x<arr[0])
    is_present=binary_search(arr+index+1,arr+n-1,x);
    else
    is_present=binary_search(arr,arr+index,x);
    cout<<"Element present: "<<is_present;
}
