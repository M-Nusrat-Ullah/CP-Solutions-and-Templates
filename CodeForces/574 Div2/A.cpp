#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x,re,s;
    scanf("%d %d",&t,&y);
    int wq[y+3]={0};
    if(t&1)s=t/2+1;
    else s=t/2;
    for(g=re=0;g<t;g++){
        scanf("%d",&x);
        wq[x]++;
    }
    sort(wq+1,wq+y+1);
    for(g=y;g>0;g--){
        if((wq[g]&1)&&wq[g]>1)
            re+=(wq[g]-1), s-=((wq[g]-1)/2), wq[g]=1;
        else if((!(wq[g]&1))&&wq[g]>1)re+=wq[g], s-=(wq[g]/2), wq[g]=0;
    }
    for(g=y;g>0;g--)
        if(s>0&&wq[g])re+=wq[g],s--;
    printf("%d\n",re);
    return 0;
}
