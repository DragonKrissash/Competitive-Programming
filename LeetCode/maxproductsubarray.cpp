#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
     int n=nums.size();
     int maxp=INT32_MIN,curp=1;
     for(int a=0;a<n;a++){
        curp=curp*nums[a];
        if(curp>maxp)
        maxp=curp;
        if(curp==0)curp=1;
        
     }   
     curp=1;
     for(int a=n-1;a>=0;a--){
        curp=curp*nums[a];
        if(curp>maxp)
        maxp=curp;
        if(curp==0)curp=1;
        
     }
     return maxp;
    }

int main(){
    
}