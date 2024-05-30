#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int a=0;a<t;a++){
        int n;
        cin>>n;
        int arr[n];
        for(int b=0;b<n;b++){
            cin>>arr[b];
        }
        int sum[n];
        sum[0]=arr[0];
        for(int b=1;b<n;b++)
        sum[b]=sum[b-1]+arr[b];
        if(sum[n-1]%2==0)
        cout<<n<<"\n";
        else{
            int ind=0;
            for(int b=0;b<n;b++)
            if(arr[b]%2!=0)
            {ind=n-b-1;break;}
            int ind2=0;
            for(int b=n-1;b>=0;b--)
            if(arr[b]%2!=0)
            {ind2=b;break;}
            cout<<max(ind,ind2)<<"\n";
        }
    }

}