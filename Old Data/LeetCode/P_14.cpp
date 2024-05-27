#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
     int n=strs.size();
     string word=strs[0];int l=word.length();
     for(int a=0;a<n;a++)
        {
            if(strs[a].length()<l)
            {word=strs[a];
            l=word.length();}
        }
        bool y;
        string com="";
    for(int a=0;a<l;a++){
        y=true;
        for(int b=0;b<n;b++)
        {
            if(y && word[a]==strs[b][a])
            continue;
            else {
                y=false;break;
            }
        }
        if(y)
        com=com+word[a];
    }
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