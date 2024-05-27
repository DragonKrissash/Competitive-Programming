#include <bits/stdc++.h>
using namespace std;

bool checkSub(string s,string t){
    int sp=0,tp=0;
    for(sp=0,tp=0;sp<s.length();)
    if(s[sp]==t[tp]){
        sp++;tp++;
    }
    else sp++;
    return (tp == t.length());  //if all characters of T are found
}

bool check(string s,string t,int arr[],int ind){
    string s2=s;
    for(int a=0;a<ind;a++)
    s2[arr[a]]='#';
    if(checkSub(s2,t))
    return true;
    else
    return false;

}

int findAns(string s,string t,int arr[],int n){
    int low=0,high=n-1,mid,ans=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(check(s,t,arr,mid))
            {ans=mid;low=mid+1;}
            else high=mid-1;
    }
    return ans;
}

int main(){
    cout<<"Enter the big string: ";
    string s;cin>>s;
    cout<<"Enter the small string: ";
    string t;cin>>t;
    cout<<"Enter the number of indexes you want to remove: ";
    int n;int arr[n]; cin>>n;
    cout<<"Enter the indexes you want to remove: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int num_of_index=findAns(s,t,arr,n);
    cout<<"The minimum number of removals required is "<<num_of_index<<endl;
}