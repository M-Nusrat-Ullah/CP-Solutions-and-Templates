#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,zt=0,ot=0,mi=-11,nt=0,ck;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=t-1;g>=0;g--)
        if(wq[g]!=wq[g-1])break;
    printf("%d\n",g);
    return 0;
}
