//Wrong
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,x,z,re=0;
    scanf("%d %d",&q,&w);
    if(q>w){
        x=q/2, z=min(w,x);
        re+=z;
        q-=z*2, w-=z;
        x=w/2, z=min(q,x);
        re+=z;
    }
    else{
        x=w/2, z=min(q,x);
        re+=z;
        w-=z*2, q-=z;
        x=q/2, z=min(w,x);
        re+=z;
    }
    printf("%d\n",re);
    return 0;
}
