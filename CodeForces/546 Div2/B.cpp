#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,z,x,re=0;
    scanf("%d %d",&q,&w);
    z=q-w;
    x=w-1;
    if(q==1)re+=2;
    else{
        re+=((q-1)*2);
        re+=3;
    }
    if(x&&z)
        if(x<z)re+=(2*x);
        else re+=(2*z);
    if(x&&z<x)re+=x;
    if(z&&x<z)re+=z;
    printf("%d\n",re);
    return 0;
}
