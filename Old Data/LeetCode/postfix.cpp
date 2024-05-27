#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string S)
    {
       stack <int> st;
       for(int a=0;a<S.size();a++){
           char c=S[a];
           if(isdigit(c))
           st.push(c-'0');
           else{
        if(c=='+')
        {
            int n1=st.top();st.pop();
            int n2=st.top();st.pop();
            st.push(n1+n2);
        }
        else if(c=='-')
        {
            int n2=st.top();st.pop();
            int n1=st.top();st.pop();
            st.push(n1-n2);
        }
        else if(c=='*')
        {
            int n2=st.top();st.pop();
            int n1=st.top();st.pop();
            st.push(n1*n2);
        }
        else if(c=='/')
        {
            int n2=st.top();st.pop();
            int n1=st.top();st.pop();
            st.push(n1/n2);
        }
           }
       }
       int ans=st.top();
       return ans;
    }

int main(){
    cout<<evaluatePostfix("231*+9-");
}