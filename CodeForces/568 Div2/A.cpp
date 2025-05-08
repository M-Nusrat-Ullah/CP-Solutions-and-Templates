#include<bits/stdc++.h>
using namespace std;
int main()
{
    int wq[5],maxa,mini,mid,g,z,m,x1,x2,re=0;
    scanf("%d %d %d %d",&wq[0],&wq[1],&wq[2],&z);
    for(g=0,maxa=mini=wq[0];g<3;g++){
        if(wq[g]>maxa)maxa=wq[g];
        if(wq[g]<mini)mini=wq[g];
    }
    for(g=0,m=wq[0];g<3;g++)
        if(wq[g]<maxa&&wq[g]>mini)m=wq[g];
    x1=m+z, x2=m-z;
    if(maxa<x1)re+=x1-maxa;
    if(mini>x2)re+=mini-x2;
    printf("%d\n",re);
    return 0;
}
