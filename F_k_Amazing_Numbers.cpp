#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        vi v(n);
        for(int a=0;a<n;a++){
            cin>>v[a];
        }
        map<int,vi>mp;
        for(int a=0;a<n;a++){
            mp[v[a]].push_back(a);
        }
        
    }
}





// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define vi vector<int>

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

// signed main(){

//     fastio
//     int tc;cin>>tc;
//     while(tc--){
//         int n;cin>>n;
//         vi v(n);
//         map<int,vi>mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         for(int a=0;a<n;a++){
//             mp[v[a]].push_back(a);
//         }
//         map<int,vi>diff;
//         for(auto [key,val]:mp){
//             int maxdif=0;
//             for(int a=val.size();a>=0;a--){
//                 if(a==val.size()){
//                     maxdif=max(n-val[a-1],maxdif);
//                 }
//                 else if (a==0){
//                     maxdif=max(val[a]+1,maxdif);
//                 }
//                 else{
//                     maxdif=max(maxdif,val[a]-val[a-1]);
//                 }
//             }
//             diff[maxdif].push_back(key);
//         }
//         vi ans(n,-1);
//         for(auto [key,val]:diff){
//             int mini=100;
//             for(int a=0;a<val.size();a++){
//                 mini=min(mini,val[a]);
//             }
//             ans[key]=mini;
//         }
//         for(int a=0;a<n;a++)
//         cout<<ans[a]<<" ";
//         cout<<endl;
//     }
// }