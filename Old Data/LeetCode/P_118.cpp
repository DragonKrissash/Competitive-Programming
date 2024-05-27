#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
     vector<vector <int>> v;
     for(int a=1;a<=numRows;a++)
     v.push_back(vector<int>(a,0));

    for(int a=0;a<numRows;a++)
    {
        for(int b=0;b<=a;b++)
        {
            if(b==0 || a==b)
            v[a][b]=1;
            else
            v[a][b]=v[a-1][b-1]+v[a-1][b];
        }
    }
    return v;
    }

int main(){
    int n;cin>>n;
    vector<vector<int>>v=generate(n);
    for(int a=0;a<v.size();a++){
        for (int b=0;b<v[a].size();b++)
        cout<<v[a][b]<<" ";
        cout<<endl;
    }
}