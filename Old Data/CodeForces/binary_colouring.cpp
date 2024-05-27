#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        int x;cin>>x;
        if(x&(x-1)==0)
        {
            int power=log2(x);
            int arr[power+1]={0};
            arr[power]=1;
            cout<<power+1<<"\n";
            for(int a=0;a<power+1;a++)
            cout<<arr[a]<<" ";
            cout<<"\n";
        }
        else{
            int power=log2(x)+1;
            
            if(pow(2,power)-x < x-pow(2,power-1))
            {
                power=power-1;
                int arr[power+1]={0};
                arr[power]=1;
                int rem=x-pow(2,power);
                for(int a=0;a<power && rem!=0;a++){
                    if(pow(2,a)<=rem){
                        rem=rem-pow(2,a);
                        arr[a]=1;
                    }
                }
                cout<<power+1<<"\n";
            for(int a=0;a<power+1;a++)
            cout<<arr[a]<<" ";
            cout<<"\n";
            }
            else
            {
            int arr[power+1]={0};
            int rem=pow(2,power)-x;
            arr[power]=1;
            for(int a=power-1;a>=0;a--){
                if(rem-pow(2,a)<0)
                continue;
                else{
                    rem=rem-pow(2,a);
                    arr[a]=-1;
                }
                
            }
            cout<<power+1<<"\n";
            for(int a=0;a<power+1;a++)
            cout<<arr[a]<<" ";
            cout<<"\n";
            }
            
        }
    }
}