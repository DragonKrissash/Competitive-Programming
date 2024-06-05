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

vi getB(const vi &a){
    vi b;
    for(lli j=1;j<sz(a);j++){
            b.push_back(__gcd(b[j],b[j-1]));
    }
    return b;
}

bool check(vi og,lli idx){
    vi a;
    for(lli i=0;i<sz(og);i++){
        if(i==idx)
        continue;
        a.push_back(og[i]);
    }
    auto b=getB(a);
    vi sortedB=b;
    sort(all(sortedB));
    return sortedB==b;

}


int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;cin>>t;
while(t--){
    int n;
    cin>>n;
    vi arr(n,0);
    int i;
    fo(i,n){
        cin>>arr[i];
    }
    if(check(arr,0)||check(arr,n-1)){
        cout<<"YES"<<endl;
        continue;
    }
    vi b=getB(arr);
    bool fl=false;
    for(lli j=0;j<sz(arr);j++){
        if(b[j]<=b[j+1])
        continue;
        for(const auto &idx:{j,j+1,j+2}){
            if(idx<0||idx>=n)
            continue;
            if(check(arr,idx))
            fl=true;
        }
    }
    cout<<(fl?"YES":"NO")<<"\n";
}
}