#include <bits/stdc++.h>
using namespace std;

vector<int> turn(vector<int>&v){
    for(int a=0;a<v.size();a++){
        if(v[a]==0)
        v[a]=1;
        else
        v[a]=0;
    }
    return v;
}

int bintonum(vector<int> &v){
    int num=0;
    for(int a=0;a<v.size();a++){
        num=num+v[v.size()-1-a]*pow(2,a);
    }
    return num;
}   

int matrixScore(vector<vector<int>>& grid) {
    //Turn the rows
    for(int a=0;a<grid.size();a++){
        if(grid[a][0]==0)
        grid[a]=turn(grid[a]);
    }
    //Turn the columns
    
    for(int a=0;a<grid[1].size();a++){
        int noo=0,noz=0;
        for(int b=0;b<grid.size();b++){
            if(grid[b][a]==0)
            noz++;
            else
            noo++;
        }
        if(noz>noo){
            for(int b=0;b<grid.size();b++)
            if(grid[b][a]==0)
            grid[b][a]=1;
            else
            grid[b][a]=0;
        }
    }
    int sum=0;
    for(int a=0;a<grid.size();a++)
    sum+=bintonum(grid[a]);
    return sum;
    }

