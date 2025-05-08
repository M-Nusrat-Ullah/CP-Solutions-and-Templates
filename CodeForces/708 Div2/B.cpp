#include<bits/stdc++.h>
using namespace std;
int wq[100003],nt[100003];
int main()
{
    int g,t,y,q,re,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&y,&q);
        for(g=0;g<=q;g++)nt[g]=0;
        for(g=0;g<y;g++){
            scanf("%d",&wq[g]);
            nt[wq[g]%q]++;
        }
        re=0;
        if(nt[0])re++;
        for(g=1;2*g<=q;g++)if(nt[g]){
            if(nt[g]>nt[q-g]){
                re++;
                nt[g]-=(nt[q-g]+1);
                nt[q-g]=0;
            }
            else if(nt[q-g]>nt[g]){
                re++;
                nt[q-g]-=(nt[g]+1);
                nt[g]=0;
            }
            else re++,nt[g]=nt[q-g]=0;
        }
        for(g=1;g<q;g++){
            re+=nt[g];
        }
        printf("%d\n",re);
    }
    return 0;
}
