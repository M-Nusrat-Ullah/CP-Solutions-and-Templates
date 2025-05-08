#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,z,x,bun,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&q,&w,&e,&z,&x);
        re=0;
        if(z>=x){
            if(q>=w*2){
                bun=w*2, q-=bun, re+=(w*z);
                if(q>1)e=min(q/2,e), re+=(e*x);
            }
            else w=q/2, re+=(w*z);
        }
        else{
            if(q>=e*2){
                bun=e*2, q-=bun, re+=(e*x);
                if(q>1) w=min(q/2,w), re+=(w*z);
            }
            else e=q/2, re+=(e*x);
        }
        printf("%d\n",re);
    }
    return 0;
}
