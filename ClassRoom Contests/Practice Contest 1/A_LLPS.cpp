#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool ispalin(string word){
    int n=word.length();
    for(int i=0;i<n/2;i++){
        if(word[i]!=word[n-i-1])return false;
    }
    return true;

}

int main()
{
   fastio;
    string s;cin>>s;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    string word="";
    int lo=0,hi=s.length()-1;
    int ans=0;
    char c=s[0];
    word=s[0];
    for(int a=1;a<s.length();a++)
    {
        if(s[a]==c)
        word+=s[a];
    }
    cout<<word;
    
}