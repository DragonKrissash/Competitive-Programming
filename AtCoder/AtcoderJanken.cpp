#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    int score=0;
    for(int a=0;a<n;a++){
        string name;int sc;
        cin>>name>>sc;
        score=score+sc;
        v.push_back({name,sc});
    }
    sort(v.begin(),v.end());
    int ind=score%n;
    cout<<v[ind].first;


}