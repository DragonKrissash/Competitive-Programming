#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ns,nt;
    string s,t;
    cin>>ns>>nt>>s>>t;
    vector<long long>v;
    long long ps=ns-1,pt=nt-1;bool checked=false;
    while(ps>=0 && pt>=0){
        if(s[ps]==t[pt] && !checked){
            v.push_back(ps+1);checked=true;
            pt--;
        }
        else if(s[ps]!=t[pt]){
            ps--;checked=false;
        }
        else ps--;
        // cout<<ps<<" ";
    }
    // cout<<"\n"<<ps<<" "<<pt;
    if(s[ps+1]==t[pt+1])
    v.push_back(ps+2);
    long long max=0;
    for (long long a=0;a<v.size()-1;a++)
    {
        if(v[a]-v[a+1]>max)
        max=v[a]-v[a+1];

        // cout<<v[a]<<" ";
    }
    cout<<max;
    
}