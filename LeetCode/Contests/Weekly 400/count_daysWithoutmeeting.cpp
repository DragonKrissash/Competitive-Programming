#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countDays(int days, vector<vector<int>>& meetings) {
    
    bool arr[days+1]={false};
    for(int i=0;i<meetings.size();i++){
        if (arr[meetings[i][0]]!=true && arr[meetings[i][1]]!=true)
        for(int j=meetings[i][0];j<=meetings[i][1];j++){
            arr[j]=true;
        }
    }
    int c=0;
    for(int i=1;i<=days;i++){
        if(arr[i]==false)
        c++;
    }
    return c;

    }

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}