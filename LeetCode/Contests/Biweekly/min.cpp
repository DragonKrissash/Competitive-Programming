#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int minOperations(vector<int>& nums) {
     int opr=0;
     string s="";
     for(int a=0;a<nums.size();a++){
        s+=to_string(nums[a]);
     }
     char ch='0';
     for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            opr++;
            ch=ch=='0'? '1' : '0';
        }
     }
     return opr;
    }

int minimumOperations(vector<int>& nums) {
     int sum=0;
     for(int a=0;a<nums.size();a++){
        if(nums[a]==3)
        sum+=0;
        else sum+=1;
     }   
     return sum;
    }

int main()
{
   fastio

}