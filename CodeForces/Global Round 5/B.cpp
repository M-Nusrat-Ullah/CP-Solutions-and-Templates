#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,nt=0;
    scanf("%d",&t);
    int wq[t+3],ew[t+3],k[t+3]={0};
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<t;g++)scanf("%d",&ew[g]);
    for(g=h=0;g<t&&h<t;g++,h++){
        while(k[wq[g]]&&g<t)g++;
        while(wq[g]!=ew[h]&&h<t)
            k[ew[h]]=1,h++,nt++;
    }
    printf("%d\n",nt);
    return 0;
}
