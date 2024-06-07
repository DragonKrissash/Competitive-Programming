#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        int lcm=1;
        for(int a=0;a<n;a++)
        {cin>>arr[a];
         lcm=(lcm*arr[a])/__gcd(lcm,arr[a]);
        }
        int arr2[n];
        for(int a=0;a<n;a++){
            arr2[a]=lcm/arr[a];
        }
        bool fl=false;
        for(int a=0;a<n;a++){
            if(arr2[a]*arr[a] <=lcm)
            {fl=true;break;}
        }
        if(!fl)
        {
            cout<<-1<<"\n";
            
        }
        else{
            for(int a=0;a<n;a++)
            cout<<arr2[a]<<" ";
            cout<<"\n";
        }
    }
    


}