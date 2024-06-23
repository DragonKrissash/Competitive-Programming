#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector <double> avg;
        sort(nums.begin(),nums.end());
        for(int a=0;a<n/2;a++){
            avg.push_back((nums[a]+nums[n-a-1])/2.0);
        }
        double minele=999.0;
        for(int a=0;a<avg.size();a++)
        minele=min(minele,avg[0]);
        return minele;
    }   

int main()
{
   fastio

}