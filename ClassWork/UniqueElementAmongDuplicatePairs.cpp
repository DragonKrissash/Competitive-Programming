#include <bits/stdc++.h>
using namespace std;

bool is_even(int n){return  (n & 1) == 0;}

int searchUniqueAmongPairs(int arr[],int n){
    int low=0,high=n-1,mid;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
        return mid;
        else if(arr[mid]==arr[mid+1])
        {if(is_even(high-mid+1))
            high=mid;
         else
            low=mid;
        }
        else if(arr[mid]==arr[mid-1])
        {if(is_even(mid-low+1))
            low=mid;
        else high=mid;
        }
        else  
            return -1;
    }
    return -1;
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int ind=searchUniqueAmongPairs(arr,n);
    cout<<"The index of the unique element is: "<<ind;
}