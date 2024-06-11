#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

vector<string> makeString(vector<vector<char>>&board){
    string word="";
    vector<string>str;
    for(int a=0;a<board.size();a++){
        word="";
        for(int b=0;b<board.size();b++){
            word+=board[a][b];
        }
        str.push_back(word);
    }
    return str;
}

bool iSafe(vector<vector<char>>&board,int row,int col){
    //check top
    for(int a=row;a>=0;a--)
    if(board[a][col]=='Q')
    return false;
    //check bottom
    for(int a=row;a<board.size();a++)
    if(board[a][col]=='Q')
    return false;
    //check left
    for(int a=col;a>=0;a--)
    if(board[row][a]=='Q')
    return false;
    //check right
    for(int a=col;a<board.size();a++)
    if(board[row][a]=='Q')
    return false;
    //left diagnol
    for(int a=1;a<=min(row,col);a++)
    if(board[row-a][col-a]=='Q')
    return false;
    //right diagnol
    for(int a=1;a<=min(row,board.size()-1-col);a++)
    if(board[row-a][col+a]=='Q')
    return false;


    return true;
}


void queen(vector<vector<char>>&board,vector<vector<string>>&ans,int row){
    if(row==board.size()){
        ans.push_back(makeString(board));
    }
    for(int col=0;col<board.size();col++){
        if(iSafe(board,row,col)){
            board[row][col]='Q';
            queen(board,ans,row+1);
            board[row][col]='.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
      vector<vector<char>>board(n,vector<char>(n,'.'));
      vector<vector<string>>ans;
      queen(board,ans,0);
      return ans;   
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}