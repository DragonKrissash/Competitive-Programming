#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
        int c=g.size();
        int sz=s.size();
        for(int a=1;a<c;a++)
        {
            if(c==1)
            break;
            g[a]=g[a-1]+g[a];
        }
        for(int a=1;a<sz;a++)
        {
            if(sz==1)
            break;
            s[a]=s[a]+s[a-1];
        }
        int low=0,mid=0,high=c-1;
        while(){
            
        }
    }

int main(){

}