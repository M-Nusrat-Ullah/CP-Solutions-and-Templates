#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,nt=0;
    scanf("%d %d",&t,&y);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<t;g++)
        if(wq[g]>=wq[y-1]&&wq[g]>0)nt++;
    printf("%d\n",nt);
    return 0;
}
