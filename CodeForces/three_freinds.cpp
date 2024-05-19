#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int a=0;a<q;a++){
        vector<long long>v(3,0);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        long long dif=v[2]-v[1]+v[1]-v[0]+v[2]-v[0];
        if(dif<2)
        cout<<dif;
        else cout<<dif-2;
    } 

}