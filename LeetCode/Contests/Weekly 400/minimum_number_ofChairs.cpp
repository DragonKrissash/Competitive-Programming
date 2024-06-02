#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int minimumChairs(string s) {
     int n=s.length();
     int chairs=0;
     int usechairs=0;
     for(int a=0;a<n;a++)   {
        if(s[a]=='E' && chairs==usechairs){
            usechairs++;
            chairs++;
        }
        else if(s[a]=='E' && chairs>usechairs){
            usechairs++;
        }
        else{
            usechairs--;
        }
        
     }
     return chairs;
    }

int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}