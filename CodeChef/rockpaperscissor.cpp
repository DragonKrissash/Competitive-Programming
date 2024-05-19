#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    for(int a=0;a<t;a++){
        cin>>n;
        string word;
        cin>>word;
        int count=0;
        bool rep=false;
        for(int b=0;b<n;b++){
            if(word[b]==word[b+1])
            {   if(!rep)
                {count++;rep=false;}
                rep=true;
                continue;
            }
            else count++;
        }
        cout<<count<<"\n";
    }
}
