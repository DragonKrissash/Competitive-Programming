#include <iostream>
using namespace std;

int maxOfBiTonic(int arr[],int n){
    int low=0,high=n-1;int mid;
    while(low<high){
        mid=(low+high)/2;
        if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1]))
        return mid;
        else if((arr[mid-1]>arr[mid]) && (arr[mid]>arr[mid+1]))
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int max_ind=maxOfBiTonic(arr,n);
    cout<<"Maximum index of bi-tonic array is "<<max_ind;
}