#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,w,e,re,nt;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        int wq[q+3],k[w+3];
        for(g=0;g<q;g++){
            scanf("%d",&wq[g]);
            k[wq[g]]=0;
        }
        h=nt=0;
        while(h<e){
            if(!k[wq[h]])nt++;
            k[wq[h]]++,h++;
        }
        re=nt;
        for(g=0,h=e;h<q;g++,h++){
            k[wq[g]]--;
            if(!k[wq[g]])nt--;
            if(!k[wq[h]])nt++;
            k[wq[h]]++;
            re=min(re,nt);
        }
        printf("%d\n",re);
    }
    return 0;
}
