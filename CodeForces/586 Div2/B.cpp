#include<bits/stdc++.h>
using namespace std;
int _gcd(int z,int x)
{
    return x==0?z:_gcd(x,z%x);
}
int main()
{
    int g,h,f,j,t,x;
    scanf("%d",&t);
    int re[t+3]={0},wq[t+3][t+3];
    for(g=0;g<t;g++)
        for(h=0;h<t;h++)
            scanf("%d",&wq[g][h]);
    for(g=0;g<t;g++)
        for(j=0;j<t;j++)if(wq[g][j]){
        x=wq[g][j];
        for(h=0;h<t;h++)if(wq[j][h])
            x=_gcd(wq[j][h],x);
        re[j]=_gcd(x,re[j]);
    }
  //  re[0]=wq[0][1]/re[1];
    for(g=0;g<t;g++)
        printf("%d ",re[g]);
    return 0;
}
