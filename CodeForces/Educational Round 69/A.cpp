#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,bm,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int wq[y+3];
        for(g=0;g<y;g++)scanf("%d",&wq[g]);
        sort(wq,wq+y);
        bm=min(wq[y-2],wq[y-1]);
        re=min(bm-1,y-2);
        printf("%d\n",re);
    }
    return 0;
}
