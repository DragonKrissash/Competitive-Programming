#include<bits/stdc++.h>
using namespace std;
#define loop(i, n) for(int i = 0; i < n; i++)
typedef long long ll;
const ll mod = 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    vector<int>first(m);
    vector<int>last(m);
    for(int i=0,j=0;i<n;i++){
        if(s[i]==t[j]){
            first[j]=i;
            j++;
        }
    }
    for(int i=n-1,j=m-1;i>=0 && j>=0;i--){
        if(s[i]==t[j]){
            last[j]=i;
            j--;
        }
    }
    int ans=0;
    for(int a=1;a<m;a++){
        ans=max(ans,last[a]-first[a-1]);
    }
    cout<<ans<<"\n";
    return 0;
    }