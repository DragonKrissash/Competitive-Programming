#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;cin>>t;
    for(int a=0;a<t;a++){
        int n,m;cin>>n>>m;
        string word;cin>>word;
        int arr[26]={0};
        for(int b=0;b<n;b++){
            arr[word[b]-'A']++;
        }
        int ans=0;
        for(int b=0;b<7;b++){
            if(arr[b]<m)
            ans=ans+m-arr[b];
        }
        cout<<ans<<"\n";
    }

}