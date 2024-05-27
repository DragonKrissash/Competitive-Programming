#include <bits/stdc++.h>
using namespace std;
int main(){
    int mi=0,mj=0;
    char arr[7][7];
    for(int a=0;a<7;a++)
    for(int b=0;b<7;b++)
    {
        cin>>arr[a][b];
        if(arr[a][b]=='0')
        {mi=a;
        mj=b;}
    }
    int steps=mi-3+mj-3-1;
    int extra=0;
    if(mi<3)
    extra=extra+mi;
    else
    extra=extra+6-mj;
    if(mj<3)
    extra=extra+mj;
    else
    extra=extra+6-mi;
    cout<<steps+extra;
    
}