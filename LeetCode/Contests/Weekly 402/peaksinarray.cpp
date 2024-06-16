#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> res;
        
        for(int a=0;a<n;a++){
            if(queries[a][0]==1){
                int l=queries[a][1];
                int r=queries[a][2];
                int count=0;
                for(int b=l+1;b<r;b++){
                    if(nums[b-1]<nums[b]&&nums[b]>nums[b+1]){
                        count++;
                    }
                }
                res.push_back(count);
            }else{
                nums[queries[a][1]]=nums[queries[a][2]];
            }
        }
        return res;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}