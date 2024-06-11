#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

vector <int> countDistinct (int A[], int n, int k)
    {
     unordered_map<int,int>map;
     vector<int>ans;
     for(int a=0;a<k;a++)
     map[A[a]]++;
     ans.push_back(map.size());
     for(int a=1;a<n-k+1;a++){
        map[A[a-1]]--;
        if(map[A[a-1]]<=0)
        map.erase(A[a-1]);
        map[A[a-1+k]]++;
        ans.push_back(map.size());
     }
     return ans;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}