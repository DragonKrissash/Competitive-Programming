#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    stack<int> st;
    st.push(word[0]);
    int count=0;
    for(int a=1;a<word.length();a++){
        if(word.length()>0 && st.top()==word[a])
        count++;
        else
        st.push(word[a]);
    }
    if(count%2==1){
        cout<<"Yes";
    }
    else cout<<"No";
}