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
    cout<<"Enter the number of the elments of the array: ";
    int n;cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"The index of the maximum element is: "<<findIndexMax(arr,n);
}