#include <bits/stdc++.h>
using namespace std;

bool check(int mid,int w,int h,int n){
    return ((mid/w)*(mid/h))>=n;
}

int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int w,h,n;
    cin>>w>>h>>n;
    int low=1,high=100,mid;
    int ans=0;
    while(high-low>1){
        mid=low+(high-low)/2;
        if(check(mid,w,h,n))
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;

}