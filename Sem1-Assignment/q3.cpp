#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2){
    int k=0; int finarr[n1+n2];
    for(int i=0,j=0;i<n1 || j<n2;){
        if(i==n1)
        finarr[k++]=arr2[j++];
        if(j==n2)
        finarr[k++]=arr1[i++];
        if(arr1[i]<arr2[j])
        finarr[k++]=arr1[i++];
        else
        finarr[k++]=arr2[j++];
    }
    for(int a=0;a<n1+n2;a++)
    cout<<finarr[a]<<" ";
}

int main(){
    cout<<"Enter the number of elements of array 1: ";
    int n1;cin>>n1;
    cout<<"Enter the elements of array 1: ";
    int arr1[n1];
    for(int a=0;a<n1;a++)
    cin>>arr1[a];
    cout<<"Enter the number of elements of array 2: ";
    int n2;cin>>n2;
    cout<<"Enter the elements of array 2: ";
    int arr2[n2];
    for(int a=0;a<n2;a++)
    cin>>arr2[a];
    merge(arr1,arr2,n1,n2);
}