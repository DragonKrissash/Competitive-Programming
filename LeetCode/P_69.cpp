#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
     int low=1,high=x,mid=0;
     while(low<=high){
        mid=low+(-low+high)/2;
        if(mid*mid == x)return mid;
        else if(mid*mid > x)high=mid-1;
        else low=mid+1;
     }   
     return high;
    }

int main(){
    cout<<mySqrt(2147395599);
}