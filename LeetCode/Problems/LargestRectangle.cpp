#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sz(a) (a.size())
int largestRectangleArea(vector<int>& heights) {
        int n=sz(heights);
        vi leftmin(n,-1);
        stack <int>s;
        for(int a=0;a<n;a++){
            while(!s.empty() && heights[s.top()]>=heights[a])
            s.pop();
            if(!s.empty())
            leftmin[a]=s.top();
            s.push(a);
        }
        vi rightmin(n,n);
        while(!s.empty())
        s.pop();
        for(int a=n-1;a>=0;a--){
            while(!s.empty() && heights[s.top()]>=heights[a])
            s.pop();
            if(!s.empty())
            rightmin[a]=s.top();
            s.push(a);
        }
        int maxarea=0;
        for(int a=0;a<n;a++){
            maxarea=max(maxarea,(rightmin[a]-leftmin[a]-1)*heights[a]);
        }
        return maxarea;
    }

int main(){
    vi v={2,1,5,6,2,3};
    largestRectangleArea(v);
}