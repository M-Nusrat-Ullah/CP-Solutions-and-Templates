#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,g,h,f,re;
    scanf("%d %d",&t,&y);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    sort(wq,wq+t);
    for(g=1;g<=t;g++){
        for(h=t-1,f=0,re=0;h>=0;h--){
            re+=max(0,wq[h]-(f++/g));
            if(re>=y)break;
        }
        if(re>=y)break;
    }
    if(re>=y)printf("%d\n",g);
    else printf("-1\n");
    return 0;
}

