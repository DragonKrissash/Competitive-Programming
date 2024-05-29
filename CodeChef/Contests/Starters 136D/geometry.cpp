#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int a=0;a<t;a++){
        string s;cin>>s;
        int n=s.size();
        int c=0;
        for(int b=0;b<n;b++)
        if(s[b]=='1')c++;

        if(c==1)
        cout<<11<<"\n";
        else if(c==2){
            if((s[0]=='1' && s[1]=='1')||(s[2]==s[3] && s[3]=='1'))
            cout<<21<<"\n";
            else
            cout<<121<<"\n";

        }
        else if(c==3){
            cout<<231<<"\n";
        }
        else{
            cout<<441<<"\n";
        }
    }
}