#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto n:nums){
            map[n]++;
        }
        for(auto pair: map){
            if(pair.second>1)
            return pair.first;
        }
    }

int main(){

}