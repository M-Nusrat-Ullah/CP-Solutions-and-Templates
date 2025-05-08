#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,w,z,mini=1e9,re;
    bool k=false;
    scanf("%d %d %d",&t,&q,&w);
    int wq[t+3];
    for(g=1;g<=t;g++)scanf("%d",&wq[g]);
    for(g=1;g<=t&&!k;g++){
        if(g-q<1)h=1;
        else h=g-q;
        if(g+w>t)z=t;
        else z=g+w;
        for(k=true;h<=z&&k;h++)
            if(h!=g&&wq[h]<wq[g]) k=false;
        if(k)re=g;
    }
    printf("%d\n",re);
    return 0;
}
