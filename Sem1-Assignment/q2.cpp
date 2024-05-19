#include <bits/stdc++.h>
using namespace std;

void createSieve(vector<bool> &is_prime,int n){
    vector<int> primes;bool y=true;
    for(int a=2;a<=500;a++){
        if(primes.size()==n)
        break;
        if(is_prime[a]){
            if(y)
        {primes.push_back(a);y=false;}
        else
        y=true;
        for(int b=a*a;b<501;b+=a)
        is_prime[b] = false;
    }
    }
    for(int a=0;a<n;a++)
    cout<<primes[a]<<" ";
}

int main(){
    int n;cout<<"Enter the number of terms: ";
    cin>>n;
    vector<bool> is_prime(501,true);
    createSieve(is_prime,n);
}