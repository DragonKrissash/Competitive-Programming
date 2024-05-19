#include <bits/stdc++.h>
using namespace std;
int main(){
    bool arr[26]={false};
    long long n,l;
    cin>>n>>l;
    string word;
    cin>>word;
    for(long long a=0;a<l;a++){
        char c;cin>>c;
        arr[c-'a']=true;
    }
    long long c=0;long long sum=0;
    for(long long a=0;a<n;a++){
        if(arr[word[a]-'a'])
        c++;
        else
        {
            sum=sum+c*(c+1)/2;
            c=0;
        }
    }
    sum=sum+c*(c+1)/2;
    cout<<sum;
}