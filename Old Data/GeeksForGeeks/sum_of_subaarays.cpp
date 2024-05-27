#include <bits/stdc++.h>
using namespace std;

long long subarraySum(long long a[], long long n)
    {
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum=sum+(i+1)*(n-i)*a[i];
        }
        return sum;
    }

int main(){

    long long n;cin>>n;
    long long arr[n];
    for(long long a=0;a<n;a++)
    cin>>arr[a];
    cout<<"The sum of subarrays: \n";
    cout<<subarraySum(arr,n);

}