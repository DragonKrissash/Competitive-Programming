#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
     vector<vector<int>> v;
     for(int a=0;a<=rowIndex;a++)   
        {v.push_back(vector<int>(a+1));
        for(int b=0;b<=a;b++)
        {
            if(a==b || b==0)
            v[a][b]=1   ;
            else
            v[a][b]=v[a-1][b]+v[a-1][b-1];
        }
    }
    return v[rowIndex];
    }

int main(){

}

