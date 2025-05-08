#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,z,x;
    bool k;
    scanf("%d",&t);
    int wq[t+3]={0};
    for(g=k=0;g<t-1;g++){
        scanf("%d %d",&z,&x);
        wq[z]++, wq[x]++;
    }
    for(g=1;g<=t;g++)if(wq[g]==2){
        k=true;
        break;
    }
    if(k)printf("NO\n");
    else printf("YES\n");
    return 0;
}
