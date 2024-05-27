#include <bits/stdc++.h>
using namespace std;

void reversestack(stack<char> & st){
    stack<char>st2;
    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }
    st=st2;
}

string stacktostring(stack<char> st){
    string s;
    while(!st.empty()){
        s+=st.top();
        st.pop();
    }
    return s;
}

int calculate(string s) {
        stack<char> st;
        for(int a=0;a<s.length();a++){
            if(s[a]=='/')
            {int n1=st.top();
            int n2=s[a+1];
            st.pop();
            st.push('0'+n1/n2);
            a++;
            }
            else st.push(s[a]);
        }
        reversestack(st);
        s=stacktostring(st);
        while(!st.empty())st.pop();
        for(int a=0;a<s.length();a++){
            if(s[a]=='*')
            {int n1=st.top();
            int n2=s[a+1];
            st.pop();
            st.push('0'+(n1*n2));
            a++;
            }
            else st.push(s[a]);
        }
        reversestack(st);
        s=stacktostring(st);
        while(!st.empty())st.pop();
        for(int a=0;a<s.length();a++){
            if(s[a]=='+')
            {int n1=st.top();
            int n2=s[a+1];
            st.pop();
            st.push('0'+(n1+n2));
            a++;
            }
            else st.push(s[a]);
        }
        reversestack(st);
        s=stacktostring(st);
        cout<<s;
        
        return 0;
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=calculate("3+5/2");
}