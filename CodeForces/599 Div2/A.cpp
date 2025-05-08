#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nt,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int wq[y+3];
        for(g=0;g<y;g++)
            scanf("%d",&wq[g]);
        sort(wq,wq+y);
        for(g=wq[y-1],re=0;g>0&&!re;g--){
            nt=0;
            for(h=0;h<y&&!re;h++){
                if(wq[h]>=g)nt++;
                if(nt==g)re=g;
            }
        }
        printf("%d\n",re);
    }
    return 0;
}
