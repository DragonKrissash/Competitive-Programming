#include <bits/stdc++.h>
using namespace std; 
int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        int m=nums2.size();
        for(int a=0;a<m;a++){
            nums2[a]=nums2[a]*k;
        }
        set<int>st;
        int c=0;
        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                if(nums1[a]%nums2[a]==0)
                c++;
            }
        }
        cout<<c;
    }
int main(){

}