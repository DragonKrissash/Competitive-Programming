#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    int n=strs.size();
    string word=min(strs[0],strs[n-1]);
    string com="";
    for(int a=0;a<word.length();a++)
    if(strs[0][a]==strs[n-1][a])
    com=com+strs[0][a];
    else break;
    return com;
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector <string>v;
    while(ss>>temp)
    v.push_back(temp);
    cout<<longestCommonPrefix(v);
}