#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,re=0,nt[7]={0};
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        nt[x%5]++;
    }
    re=nt[4];
    if(nt[3]>=nt[1])
        re+=nt[3]+nt[2]/2+nt[2]%2;
    else{
        re+=nt[3];
        nt[1]-=nt[3];
        re+=nt[2]/2;
        if(nt[2]%2)
            re++,nt[1]-=2;
        if(nt[1]>0)
            if(nt[1]%4)
                re+=nt[1]/4+1;
            else re+=nt[1]/4;
    }
    printf("%d\n",re);
    return 0;
}
