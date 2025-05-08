#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,x,z,c,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        z=w/q;
        c=w%q;
        x=((z*(w-c))*(z*(w-c)))+((z*c)*(z*c));
        printf("%d\n",x);
    }
    return 0;
}

//((z*(z-1)/2)*(w-q%w))+(((z+1)*z/2)*(q%w));
