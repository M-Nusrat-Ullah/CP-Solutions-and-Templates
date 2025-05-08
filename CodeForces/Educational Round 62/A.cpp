#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,ma,re=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=1;g<=t;g++)scanf("%d",&wq[g]);
    ma=wq[1];
    for(g=1;g<=t;g++){
        if(wq[g]>ma) ma=wq[g];
        if(g==ma) re++;
    }
    printf("%d\n",re);
    return 0;
}
