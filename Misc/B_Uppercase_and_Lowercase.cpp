#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;cin>>word;
    int up=0;int lo=0;
    for(int a=0;a<word.length();a++){
        if(isupper(word[a]))
        up+=1;
        else lo+=1;
    }
    if(up>lo)
    {
        for(int a=0;a<word.length();a++)
        word[a]=toupper(word[a]);
    }
    else{
        for(int a=0;a<word.length();a++)
        word[a]=tolower(word[a]);
    }
    cout<<word;

}