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
        bool y=true;
        for(int a=0;a<s.size();a++){
            if(s[a]=='0'){
                y=false;break;
            }
        }
        if(y)return 0;
        else{
            deque<int>q;
            for(int a=0;a<nums.size();a++)
            {
                if(s[a]=='0')q.push_back(a);
            }
            while(!q.empty()){
                while(s[q.front()]=='1')q.pop_front();
                int ind=q.front();
                for(int a=ind;a<s.size();a++){
                    if(s[a]!='0')s[a]='1';
                    else s[a]='0';
                }
                opr++;
                q.pop_front();
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