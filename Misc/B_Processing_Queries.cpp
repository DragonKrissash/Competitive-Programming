#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
using ll = long long;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,b;
cin>>n>>b;
vector<pair<ll,ll>>query(n);
for(ll a=0;a<n;a++){
    ll start,end;
    cin>>start>>end;
    query[a].first=start;
    query[a].second=end;
}
deque<ll>ansq;
ll servq=0;
vector<ll>ans;
ans.push_back(query[0].first+query[0].second);
        ansq.push_back(query[0].first+query[0].second);
for(int a=1;a<n;a++){
        ll start=query[a].first;
        ll end=query[a].second;
        if(ansq.front()>start){
            if(servq<b)
            {servq+=1;
            ans.push_back(end+ansq.back());
             ansq.push_back(end+ansq.back());
            }
            else if(servq=b)
            {ans.push_back(-1);}
        }
        else{
            if(ansq.back()<start){
                ans.push_back(start+end);
                ansq.push_back(start+end);
                ansq.pop_front();
            }
            else{
            ans.push_back(ansq.back()+end);
            ansq.push_back(ansq.back()+end);
            ansq.pop_front();
            }
            
            
        }
        }
for(auto a:ans)
cout<<a<<" ";
}