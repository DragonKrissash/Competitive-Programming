#include <bits/stdc++.h>
using namespace std;

int max(vector <int> v){
    int mx = v[0];
    for(int a=0;a<v.size();a++){
        if (mx < v[a]) 
            mx = v[a];
    }
            return mx;
    
}

int mode(vector <int> v){
    vector <int> c;int count;
    for(int a=0;a<v.size();a++) {
        count=1;
        for(int b=a+1;b<v.size();b++) 
        if(v[a]==v[b])
        count++;
        c.push_back(count);
    }
    int f=max(c);
    for(int a=0;a<c.size();a++)
    if(c[a]==f)
    return v[a];
    return -1;
}

double avg(vector <int> v){
    double sum=0;
    for(int a=0;a<v.size();a++)
    sum=sum+v[a];
    return sum/v.size();
}

int sum(vector <int> v){
    double sum=0;
    for(int a=0;a<v.size();a++)
    sum=sum+v[a];
    return sum;
}

int min(vector <int> v){
    int mn = v[0];
    for(int a=0;a<v.size();a++){
        if (mn > v[a]) 
            mn = v[a];
        }
            return mn;
    
}

void oprt(vector<int> v) {
    cout<<min(v)<<", "<<max(v)<<", "<<sum(v)<<", "<<avg(v)<<", "<<mode(v)<<", ";
}

int main(){
    vector<int> v;
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements of array: ";
    for(int a=0;a<n;a++){
        int x;cin>>x;
        v.push_back(x);
        cout<<"min, max, sum, average, and mode after addition of "<<x<<" is ";
        oprt(v);cout<<endl;
    }
}