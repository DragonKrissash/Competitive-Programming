#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

int minAddToMakeValid(string s) {
     stack<char>st;
     int n=s.length();
     unordered_map<char,char>map;
     map['(']=')';
     map[')']='(';
     st.push(s[0]);
     for(int a=1;a<n;a++){
        if(s[a]==map[st.top()])
        st.pop();
        else st.push(s[a]);
     }   
     return st.size();
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}