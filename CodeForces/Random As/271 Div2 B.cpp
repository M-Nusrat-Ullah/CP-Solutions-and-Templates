#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x,lo,hi,m,re;
    scanf("%d",&t);
    int wq[t+3]={0};
    for(g=1;g<=t;g++){
        scanf("%d",&x);
        wq[g]=x+wq[g-1];
    }
    scanf("%d",&y);
    while(y--){
        scanf("%d",&x);
        lo=0, hi=t;
        while(lo<hi){
            m=(lo+hi)>>1;
            if(lo==hi-1){
                if(x<=wq[lo])re=lo;
                else re=hi;
                break;
            }
            else if(wq[m]==x){
                re=m;
                break;
            }
            else if(wq[m]>x) hi=m;
            else lo=m;
        }
        printf("%d\n",re);
    }
    return 0;
}
