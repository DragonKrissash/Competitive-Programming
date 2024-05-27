#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {
        int n=s.length();
        stack<int> st;
        int num=0;
        char op='';
        for(auto c:s){
            if(isdigit(c)){
                num=num*10+c-'0';
            }
            if((!isdigit(c) && c!=' ')||c==s[s.size()-1]){
                if(op=='+')
                st.push(num);
                else if(op=='-')
                st.push(-num);
                else if(op=='*')
                {
                    int temp=st.top()*num;st.pop();
                    st.push(temp);
                }
                else if(op=='/'){
                    int temp=st.top()/num;st.pop();
                    st.push(temp);
                }
            op=c;num=0;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;

    }

int main(){
    cout<<calculate("3+2*2");
}