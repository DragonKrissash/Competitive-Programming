#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=0;a<t;a++){
        int n;
        cin>>n;
        int arr[n];
        for(int b=0;b<n;b++){
            cin>>arr[b];
        }
        int sum=0;int ele=0;
        for(int b=0;b<n;b++){
            for(int c=b;c<n;c++){
                sum=0;
                for(int d=b;d<=c;d++)
                sum=sum+arr[d];
                if(sum%2==0 && (c-b+1)>ele)
                ele=c-b+1;
            }
        }
        cout<<ele<<"\n";
            
    }
}