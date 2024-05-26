#include <bits/stdc++.h>
using namespace std; 

string compressedString(string word) {
        int n=word.length();
        int arr[26]={0};
        for(int a=0;a<n;a++)
        arr[word[a]-'a']++;
        string comp="";
        for(int b=0;b<26;b++){
            if(arr[b]==0)
            continue;
            if(arr[b]<=9)
            comp+=to_string(arr[b])+to_string(65+b);
            else{
                while(arr[b]>9)
                {comp+='9'+to_string(65+b);
                 arr[b]-=9;
                 }
                 comp+=to_string(arr[b])+to_string(65+b);
            }
        }
        return comp;
    }