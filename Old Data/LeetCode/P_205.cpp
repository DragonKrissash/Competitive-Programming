#include <bits/stdc++.h>
using namespace std;

    bool isIsomorphic(string s, string t) {
            if(s.length()!=t.length())
            return false;
            vector<int>v(150,1000);
            for(int a=0;a<s.length();a++){
                if(v[s[a]]==1000)
                v[s[a]]=s[a]-t[a];
                else if(v[s[a]]==s[a]-t[a])
                continue;
                else
                return false;
            }
            return true;
        }

int main(){
    string s,t;
    cin>>s>>t;
    cout<<isIsomorphic(s,t);
}