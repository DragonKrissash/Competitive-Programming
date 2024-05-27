#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int lower_bound(vector <int> v,int x){
    int high=v.size()-1,low=0,mid,ans;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]>=x)
        {ans=mid;high=mid-1;}
        else low=mid+1;
    }
    return ans;
}

int upper_bound(vector <int> v,int x){
    int low=0,high=v.size()-1,mid,ans;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]>x){
            ans=mid,high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

bool binSearch(vector<int> v,int x){
    int n=v.size();
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid==x) return true;
        if(mid<x)low=mid;
        else high=mid;
    }
    return false;
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    vector<int> v;
    for(int a=0;a<n;a++)
    { int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"Enter the target number to search for: ";
    int x;cin>>x;
    if(binSearch(v,x))
    cout<<"The element is present!\n";
    else 
    cout<<"The element is not present!\n";
    cout<<"The lower bound is: "<<lower_bound(v,x)<<endl;
    cout<<"The upper bound is: "<<upper_bound(v,x);

}