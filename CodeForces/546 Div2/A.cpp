#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,q,w,g,h,i,wq[300],nt=0;
    scanf("%d",&t);
    for(i=0,g=0,h=1;i<t;i++,g+=2,h+=2)
        scanf("%d %d",&wq[g],&wq[h]);
    scanf("%d",&m);
    for(i=0,g=0,h=1;i<t;i++,g+=2,h+=2){
        nt++;
        if(m>=wq[g]&&m<=wq[h])break;
    }
    printf("%d\n",t-nt+1);
    return 0;
}
