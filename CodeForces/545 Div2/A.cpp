#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,nt=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0,h=1;h<t;g++,h++){
        if(wq[g]==wq[h])nt++;
    }
    if(!nt)nt=2;
    printf("%d\n",nt);
    return 0;
}
