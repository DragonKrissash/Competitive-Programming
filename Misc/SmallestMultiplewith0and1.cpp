#include <bits/stdc++.h>
using namespace std;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) ((lli)(x).size())
#define eb emplace_back
#define X first
#define Y second
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;cin>>n;
    unordered_map<int,bool>map;
    for(int a=1;a<n;a++)
    map[a]=false;
    deque<pair<string,int>>dq;
    dq.push_back({"1",1%n});
    string ans="";
    while(!dq.empty()){
        auto [strnum,mod]=dq.front();
        int num=stoi(strnum);
        dq.pop_front();
        if(num%n==0)
        {
            ans=to_string(num);break;
        }
        if(map[(mod*10)%n]==false)
        {dq.push_back({to_string(num*10),(mod*10)%n});
            map[(mod*10)%n]=true;
        }
        if(map[(mod*10+1)%n]==false)
        {dq.push_back({to_string(num*10+1),(mod*10+1)%n});
            map[(mod*10+1)%n]=true;    
        }
    }
    cout<<ans;

}
