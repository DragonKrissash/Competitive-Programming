#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int k,int work){
    int p=1,curr_work=0;
    for(int a=0;a<n;a++)
    {
        if(arr[a]>work)return false;
        if( curr_work+arr[a]<=work)
        curr_work+=arr[a];
        else {p++,curr_work=arr[a];}
    }
    return (p<=k);
}

int main(){
    cout<<"Enter the number of works you have: ";
    int n;cin>>n;
    cout<<"Enter the value of works you have: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the number of persons you need to allot: ";
    int k;cin>>k;int sum=0;
    for(int a=0;a<n;a++)
    sum=sum+arr[a];
    int low=*(max_element(arr,arr+n)),high=sum,mid;int ans;
    while(low<=high){
        mid=(low+high)/2;
        if(check(arr,n,k,mid))
        {ans=mid;high=mid-1;}
        else low=mid+1;
    }
    cout<<"\nThe work is: "<<ans;
}