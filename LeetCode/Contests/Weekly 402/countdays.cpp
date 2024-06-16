#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

int countCompleteDayPairs(vector<int>& hours) {
    int count=0;
     int n=hours.size();
     for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(hours[a]+hours[b]    %24 == 0){
                count++;
        }
     }   
     return count;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}