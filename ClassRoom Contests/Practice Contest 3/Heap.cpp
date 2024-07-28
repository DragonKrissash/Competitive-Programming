#include <bits/stdc++.h>
using namespace std;
#include <vector>

class Heap{

    public:

        vector<int> a;
        int sz=0;

        int parent(int x){
            return (x-1)/2;
        }

        int leftChild(int x){
            return 2*x+1;
        }

        int rightChild(int x){
            return 2*x+2;
        }

        void push(int val){
            int ind=sz;
            a.push_back(val);
            sz++;
            while(ind!=0){
                if(a[ind]>a[parent(ind)])
                {
                    swap(a[ind],a[parent(ind)]);
                    ind=parent(ind);
                }else break;
            }
        }

        int top(){
            if(isEmpty()){
                return INT_MIN;
            }
            return a[0];
        }

        void pop(){
            if(isEmpty()){
                return ;
            }
            a[0]=a[size()-1];
            a.pop_back();
            sz--;
            int ind=0;
            while(true){
                int cur=a[ind];
                int lc=leftChild(ind)<sz ? a[leftChild(ind)]: INT_MIN;
                int rc=rightChild(ind)<sz ? a[rightChild(ind)]:INT_MIN;

                int maximum=max({cur,lc,rc});
                if(maximum==cur) break;
                if(maximum==lc){
                    swap(a[ind],a[leftChild(ind)]);
                    ind=leftChild(ind);
                }else{
                    swap(a[ind],a[rightChild(ind)]);
                    ind=rightChild(ind);
                }
            }
        }

        bool isEmpty(){
            return size()==0;
        }

        int size(){
            return sz;
        }
};