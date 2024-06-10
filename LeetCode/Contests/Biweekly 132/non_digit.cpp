#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

string clearDigits(string s) {
     stack<char>st;
     for(int a=0;a<s.length();a++){
        if(isdigit(s[a]) && !isdigit(st.top()))
        st.pop();
        else
        st.push(s[a]);
     }   
     ostringstream oss;
     while(!st.empty())
     {oss<<st.top();
     st.pop();}
     string newword=oss.str();
     reverse(newword.begin(),newword.end());
    return newword;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}