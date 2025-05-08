#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,q,w,x,nt=0,wq[100003];
    scanf("%d %d %d",&t,&q,&w);
    for(g=1;g<=t;g++){
        scanf("%d",&wq[g]);
        if(wq[g]==q)x=g;
    }
    if(wq[x]==w)printf("0\n");
    else{
        g=wq[wq[x]];
        while(g!=w&&g!=q)
            g=wq[g],nt++;
        if(g==w)printf("%d\n",nt+1);
        else printf("-1\n");
    }
    return 0;
}
