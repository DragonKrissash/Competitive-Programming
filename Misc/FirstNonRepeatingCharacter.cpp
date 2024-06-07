#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second

string FirstNonRepeating(string A){
		    // Code here
		int n=A.length();
        string ans="";
        vector<int>last(26,-1);
        vector<int>fre(26,0);
        for(int a=0;a<n;a++){
            if(last[A[a]-'a']==-1)
            {
                last[A[a]-'a']=a;
            }
        }
        for(int a=0;a<n;a++){
            char ch='#';
            fre[A[a]-'a']++;
            int x=n+1;
            for(int b=0;b<26;b++){
                if(fre[b]==1 && x>last[b])
                {
                    x=last[b];
                    ch=char(b+'a');
                }
            }
            ans+=ch;
        }
        return ans;
	}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<FirstNonRepeating("tcpmxaixsswjelbswxytyhbwjinuhxhvpwaybmdhndafszoghpyzdahiqsgluufqcekjk");


}