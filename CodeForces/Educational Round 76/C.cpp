#include<bits/stdc++.h>
using namespace std;
int wq[200003],st[200007];
int main()
{
    int g,h,t,y,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++){
            scanf("%d",&wq[g]);
            st[wq[g]]=0;
        }
        for(g=h=0,re=1e9;h<y;h++){
            while(h<y&&++st[wq[h]]<=1)h++;
            if(st[wq[h]]>1)re=min(re,h-g+1);
            while(st[wq[h]]>1&&g<h)st[wq[g]]--,re=min(re,h-g+1),g++;
        }
        if(re==1e9)printf("-1\n");
        else printf("%d\n",re);
    }
    return 0;
}
