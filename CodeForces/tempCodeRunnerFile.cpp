#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,v,brig;
    cin>>n>>v>>brig;
    vector<int>x(n,0);
    vector<int>y(n,0);
    vector<int>br(n,0);
    for(int a=0;a<n;a++){
        cin>>x[a]>>y[a]>>br[a];
    }
    for(int a=0;a<v;a++){
        int t,x1,y1,x2,y2;
        cin>>t>>x1>>y1>>x2>>y2;
        int totbrig=0;
        for(int b=0;b<n;b++){
            
            // if(x[b]>=x1 && x[b]<=x2 && y[b]>=y1 && y[b]<=y2)
            // {if(t>brig)
            //     totbrig=totbrig+((br[b]+t)-(t/brig))%brig;
            // else
            // totbrig=totbrig+(br[b]+t)%brig-(br[b]+t)/3;
            // }

            int sub_b=0;
            for(int c=0;c<t;c++){
                if(sub_b<=brig)
                sub_b++;
                else
                sub_b=0;
            }
            totbrig=totbrig+sub_b;
        }
        cout<<totbrig<<endl;
    }
}