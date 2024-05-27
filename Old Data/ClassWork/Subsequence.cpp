#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter big string: ";
    cin>>s;
    cout<<"Enter small string: ";
    cin>>t;
    int i,j;
    for(i=0,j=0;i<t.length() || j<s.length();){
        if(t[i]==s[j]){
            i++;j++;
        }
        else j++;
    }
    if(i==t.length())
    cout<<"Yes\n";
    else
    cout<<"No";
}
