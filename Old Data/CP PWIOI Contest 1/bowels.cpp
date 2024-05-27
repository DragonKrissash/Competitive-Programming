#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={'A','H','I','M','O','T','U','V','W','X'};
    string word;
    cin>>word;
    int count=0;
    for(int a=0;a<10;a++){
        for(int b=0;b<word.length();b++){
            if(arr[a]==toupper(word[b]))
            count++;
        }
    }
    cout<<count;
}