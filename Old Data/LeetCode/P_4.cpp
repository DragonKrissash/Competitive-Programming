#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        for(int a=0;a<n2;a++)
        nums1.push_back(nums2[a]);
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n&1==1)
        return nums1[(n+1)/2];
        else return (nums1[n/2]+nums1[n/2 + 1])/2;
    }
int main(){

}