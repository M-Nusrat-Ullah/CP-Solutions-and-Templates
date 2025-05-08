#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,lo,hi,l,h,re;
    bool k,k1;
    map<int,pair<int,int>>nt;
    scanf("%d",&t);
    int wq[t+3];
    for(g=1,k=k1=0;g<=t;g++){
        scanf("%d",&wq[g]);
        if(!k){
            nt[wq[g]].first++;
            if(nt[wq[g]].first>1)k=true, l=g, lo=nt[wq[g]].second;
            else nt[wq[g]].second=g;
        }
    }
   // printf("%d %d\n",l,lo);
    if(!k){printf("0\n");return 0;}
    for(g=t;g>0;g--){
        nt[wq[g]].first++;
        if(nt[wq[g]].first>1){
            h=g;
            if(nt[wq[g]].second)k1=true;
            break;
        }
    }
   // printf("%d\n",h);
    nt.clear();
    for(g=1;g<l;g++)
        nt[wq[g]].first++;
    if(k1)g=h-1;
    else g=t;
    for(;g>0;g--){
        nt[wq[g]].first++;
        if(nt[wq[g]].first>1){hi=g; break;}
    }
  //  printf("%d\n",hi);
    re=min(hi-lo,h-l);
    printf("%d\n",re+1);
    return 0;
}
