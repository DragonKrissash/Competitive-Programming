#include <bits/stdc++.h>
using namespace std;

bool checkfreq(string s1,string s2)
{
    int n=s1.length();
    cout<<n<<" "<<s1<<" "<<s2<<" \n";
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[s1[i]-'a']+=1;
    }
    for(int i=0;i<n;i++){
        arr[s2[i]-'a']-=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0)
        return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
     int n=s2.length();
     int m=s1.length();
     for(int a=0;a<=n-m;a++){
        if(checkfreq(s1,s2.substr(0+a,m)))
        return true;
     }   
     return false;
    }

int main(){
    string s1,s2;
    s1="ab";
    s2="eidboaoo";
    checkInclusion(s1,s2);
}