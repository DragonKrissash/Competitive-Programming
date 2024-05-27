#include <bits/stdc++.h>
using namespace std; 
long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n=nums1.size();
        long long m=nums2.size();
        for(long long a=0;a<m;a++){
            nums2[a]=nums2[a]*k;
        }
        int c=0;
        long long p1=0,p2=0;
        while(p1<n){
            if(nums1[p1]<nums2[p2])
            {p1++;p2=0;}
            else if(nums1[p1]==nums2[p2])
            {
                c++;
                p2++;
            }
            else{
                if(nums1[p1]%nums2[p2]==0)
                {c++;p2++;}
            }
            
        }
        return c;
    }
int main(){

}