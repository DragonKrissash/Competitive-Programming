#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=1;a<=t;a++){
        int n;int b;int g;
        cin>>n>>b>>g;
        int c=b<g? b:g;
        int no_c=n/3;
        int emp=n%3+1;
        int no_s=emp/3;
        if(c<no_c)
        no_c=c;
        if(n==2)
        no_c=1;
        cout<<no_c*2+no_s<<endl;
    }
}