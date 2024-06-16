#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> findDivs(int n){
    vector<int> divs;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n/i==i)
            divs.emplace_back(i);
            else{
                divs.emplace_back(i);
                divs.emplace_back(n/i);
            }
        }
    }
    return divs;
}

int printPairs(int arr[], int n, int k)
    {
    	unordered_map<int, bool> map;
        for(int a=0;a<n;a++){
            map[arr[a]]=true;
        }
        int count=0;
        for(int a=0;a<n;a++){
            if(arr[a]>k && map[k]){
                count++;
            }
            
                if(arr[a]>=k){
                    vector<int>v=findDivs(arr[a]);
                    for(auto x:v){
                        if(arr[a]%x==k and map[x])
                        count++;
                    }
                    v.clear();
                }
                 
        }
        map.clear();
        return count;
    }

int main()
{
   fastio;

}