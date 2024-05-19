#include <bits/stdc++.h>
#include <string>
using namespace std;
void printVector(vector<int>v){
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
}
int main(){
    cout<<"Enter a string: ";
    string s;
    cin>>s;
    vector<int>v[26];
    for(int a=0;a<s.size();a++)
    {
        v[s[a]-'a'].push_back(a);
    }
    for(int a=0;a<26;a++)
    {if(v[s[a]-'a'].size()!=0)
    {cout<<(char)(98+a)<<" ";
        printVector(v[s[a]-'a']);
    cout<<endl;}
}
}