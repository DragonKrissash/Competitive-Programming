#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool check(vector<int>&v,int mid,string t,string p){
    string word="";
    unordered_set<int> st;
    for(int a=0;a<mid;a++)
    st.insert(v[a]);
    for(int a=0;a<t.length();a++)
    if(st.find(a)==st.end()){
        word+=t[a];
    }
    int p1=0,p2=0;
    while(p1<word.length()&&p2<p.length()){
        if(word[p1]==p[p2]){
            p1++;p2++;
        }
        else{
            p1++;
        }
    }
    return p2==p.length();
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t,p;
    cin>>t>>p;
    int n=t.size();
    vector<int>v(n,0);
    for(int a=0;a<n;a++){
        cin>>v[a];
        v[a]-=1;
    }
    int lo=0,hi=n,mid;
    while(hi>lo+1){
        int mid=(lo+hi)>>1;
        if(check(v,mid,t,p)){
            lo=mid;
        }
        else hi=mid;
    }
    cout<<lo;
}