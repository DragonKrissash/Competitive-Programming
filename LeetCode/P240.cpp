#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row=matrix.size();
     int col=matrix[0].size();
     int r=0,c=col-1;
     while(c!=-1 || r!=row){
        if(matrix[r][c]==target)
        return true;
        else if(matrix[r][c]<target)
        r++;
        else
        c--;
     }
     return false;
    }

int main(){
    

}