#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,x,z,nt1=0,nt2=0;
    scanf("%d %d",&t,&y);
    x=t, z=y;
    while(x<z)
        nt1++, x*=2;
    nt1+=(x-z);
    x=t, z=y;
    while(x<z)
        nt2++, z/=2;
    nt2+=(x-z);
    if(t==1)nt2=nt1+1;
    printf("%d\n",nt1>nt2?nt2:nt1);
    return 0;
}
