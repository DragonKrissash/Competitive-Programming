#include <bits/stdc++.h>
using namespace std;
int powMod(int a,int b,int m){
    if(b==0)return 1;
    else return ((a%m)*powMod(a,b-1,m))%m;
}
int main(){
    cout<<"Enter the values of a, b, m to find a^b % m: ";
    int a,b,m;
    cin>>a>>b>>m;
    cout<<"The value of "<<a<<" ^ "<<b<<" % "<<m<<" is: "<<powMod(a,b,m);
}