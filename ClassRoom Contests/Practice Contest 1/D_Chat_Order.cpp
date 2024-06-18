#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
   fastio;
    int n;cin>>n;
    map<string,bool>mp;
    vector<string>names;
    deque<string>ans;
    for(int a=0;a<n;a++){
        string s;cin>>s;
        names.push_back(s);
    }
    set<string> st;
    reverse(names.begin(),names.end());
    for(int a=0;a<n;a++){
        if(st.find(names[a])==st.end())
        {   st.insert(names[a]);
            ans.push_front(names[a]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int a=0;a<ans.size();a++)
    cout<<ans[a]<<"\n";
    
}