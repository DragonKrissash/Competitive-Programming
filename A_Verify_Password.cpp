#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;
    cin>>t;
    for(int a=0;a<t;a++){
        int n;cin>>n;
        string s;cin>>s;
        if(!isdigit(s[0]) && isdigit(s[n-1]))
        cout<<"NO"<<"\n";
        else{
            int ind=0;
            bool y=true;
            while(isdigit(s[ind]))
            ind++;
            for(int b=1;b<ind;b++){
                if((s[b]-'0')<(s[b-1]-'0'))
                y=false;
            }
            
            for(int b=ind+1;b<n;b++){
                if((s[b]-'a')<(s[b-1]-'a'))
                y=false;
            }
            if(y)
            cout<<"YES"<<"\n";
            else 
            cout<<"NO"<<"\n";
        }
    }

}