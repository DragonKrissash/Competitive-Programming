#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for (int a=0;a<t;a++){
        double x,y;cin>>x>>y;
        int min=ceil(y/2);
        int rem=min*15-y*4;
        if(x<=rem)
        cout<<min;
        else{
            x=x-rem;
            while(x>0){
                x=x-15;
                min++;
            }
            cout<<min;
        }       
    }
}