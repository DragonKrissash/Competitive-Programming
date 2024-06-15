#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll b1,b2,b3,p1,p2,p3;
    cin>>b1>>b2>>b3;
    cin>>p1>>p2>>p3;
    ll r;
    cin>>r;
    ll a=0,b=0,c=0;
    for(auto &ch:s){
        if(ch=='B') a++;
        else if(ch=='S') b++;
        else c++;
    }
    
    ll low=0,high=r+200;
    while(low<=high){
        ll mid=low+(high-low)/2;
        // mid denotes the number of hamburger we can make
        ll z=0;
        ll r1=max(a*mid-b1,z);
        ll r2=max(b*mid-b2,z);
        ll r3=max(c*mid-b3,z);
        ll price=r1*p1+r2*p2+r3*p3;
        if(price<=r) low=mid+1;
        else high=mid-1;
    }
    
    // low or high
    // when low==high
    // high-> ans and low=ans+1;
    // high=na-1;
    cout<<high;
    
    

    return 0;
}

// signed main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     string re;
//     cin>>re;
//     int b1,b2,b3,p1,p2,p3;
//     cin>>b1>>b2>>b3;
//     cin>>p1>>p2>>p3;
//     int r;
//     cin>>r;
//     int a,b,c;
//     for(auto &ch:re)
//     {
//         if(ch=='B')a++;
//         else if(ch=='S')b++;
//         else c++;
//     }
    
//     int lo=0,hi=r+200;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         int z=0;
//         int r1=max(mid*a-b1,z);
//         int r2=max(mid*b-b2,z);
//         int r3=max(mid*c-b3,z);
//         int price=r1*p1+r2*p2+r3*p3;
//         if(price<=r) lo=mid+1;
//         else hi=mid-1;
//     }
//     cout<<hi;
// }












// #include <bits/stdc++.h>
// using namespace std;
// #define all(x) begin(x), end(x)
// #define X first
// #define Y second
// #define int long long

// struct coll{
//     int b=0,s=0,c=0;
// };

// bool check(int mid,coll &item,coll &price,int r,unordered_map<char,int> &rec){
//     int b=mid*rec['B'];
//     int s=mid*rec['S'];
//     int c=mid*rec['C'];
//     b=(b==0)? 0:b-item.b;
//     s=(s==0)? 0:s-item.s;
//     c=(c==0)? 0:c-item.c;
//     int bprice=b*price.b;
//     int sprice=s*price.s;
//     int cprice=c*price.c;
//     int sum=bprice+cprice+sprice;
//     return sum<=r ;
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string recipe;cin>>recipe;
//     coll item;
//     coll price;
//     unordered_map<char,int> rec={{'B',0},{'S',0},{'C',0}};
//     for(int a=0;a<recipe.length();a++){
//         rec[recipe[a]]++;
//     }

//     cin>>item.b>>item.s>>item.c;
//     cin>>price.b>>price.s>>price.c;
//     int r;cin>>r;
//     int lo=0,hi=r+200,mid;int ans=0;
//     while(lo<=hi){
//         mid=lo+(hi-lo)/2;
//         if(check(mid,item,price,r,rec))
//         {ans=mid;lo=mid+1;}
//         else hi=mid-1;
//     }
//     cout<<endl<<hi<<endl;



// }