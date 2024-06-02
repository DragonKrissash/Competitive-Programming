#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> merge(vector<vector<int>>&v){
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    int n=v.size();
    int s=v[0][0],e=v[0][0];
    int si,ei;
    for(int i=1;i<n;i++){
        si=v[i][0];ei=v[i][1];
        if(si>e){
            ans.push_back({s,e});
            s=si;
        }
        e=max(e,ei);
    }
    ans.push_back({s,e});
    return ans;
}

int countDays(int days, vector<vector<int>>& meetings) {
    int c=0;
    vector<vector<int>> sortedmeetings=merge(meetings);
    int busy=0;
    for(auto meet:sortedmeetings){
        busy+=meet[1]-meet[0]+1;
    }
    return days-busy;

    }
    

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}