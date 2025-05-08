#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,re=1e-9,wq[200003];
    scanf("%d",&t);
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<t;g++){
        h=g;
        while(wq[h+1]<=wq[h]*2&&h+1<t)h++;
        if(h-g>re) re=h-g;
        g=h;
    }
    printf("%d\n",re+1);
    return 0;
}
