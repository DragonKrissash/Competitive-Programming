#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootVal=preorder[0];
        int leftCount=0;
        for(int a=0;a<inorder.size();a++){
            if(inorder[a]==rootVal){
                break;
            }else{
                leftCount++;
            }
        }
        TreeNode rootNode=TreeNode(rootVal);
        
    }

int main()
{
   fastio

}