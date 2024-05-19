#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int b=1;b<=t;b++){
        string word;
        cin>>word;
        int max=270,sum=0,a=0;
        sort(word.begin(),word.end());
        for(a=0;a<word.length();a++){
            sum=sum+word[a];
            if(sum>=max){
                break;
            }
        }
        if(sum<max)
        cout<<-1<<endl;
        else
        cout<<a+1<<endl;
    }
}
