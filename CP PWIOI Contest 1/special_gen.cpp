#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=1;a<=t;a++)
    {   int n;
        cin>>n;
        long long kids=1;long long tot_kids=0;
        tot_kids=3*(pow(2,n/3)-1)+pow(2,n/3)*(n%3);
        cout<<tot_kids<<endl;
    }
}