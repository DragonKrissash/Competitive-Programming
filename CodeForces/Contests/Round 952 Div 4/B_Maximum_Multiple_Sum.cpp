#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

int sumMul(int a,int n){
    int p=0;
    for(int b=1;b*a<=n;b++){
        p+=b*a;
    }
    return p;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int>num={0,0};
        for(int a=2;a<=n;a++){
           pair<int,int>num2={a,sumMul(a,n)} ;
           if(num2.Y>num.Y)
           num=num2;
        }
        cout<<num.X<<"\n";
    }

}