#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

bool isPossible(float midtime,vector<long double>&x,vector<long double>&v){
    int n=x.size();
    vector<pair<float,float>>ranges;
    for(int a=0;a<n;a++){
        ranges.push_back({x[a]-midtime*v[a],x[a]+midtime*v[a]});
    }
    sort(all(ranges));
    int s=ranges[0].X,e=ranges[0].Y;
    int si,ei;bool possible=true;
    for(int a=1;a<n;a++){
        si=ranges[a].X;ei=ranges[a].Y;
        if(s<=si){
            s=si;
            if(si<=e) e=min(e,ei);
            else {possible=false;break;}
        }
    }
    cout<<midtime<<" "<<s<<" "<<e<<endl;
    return possible;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<long double> x(n,0);
    vector<long double> v(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>v[i];
    }
    float mintime=0,maxtime=1e5;
    int loop=100;
    float ans;
    while (maxtime-mintime>1)
    {
        float midtime=(mintime+maxtime)/2.0;
        if(isPossible(midtime,x,v))
        {ans=midtime;maxtime=midtime-1;}
        else mintime=midtime+1;
    }
    cout<<fixed<<setprecision(1);
    cout<<ans;
    
}