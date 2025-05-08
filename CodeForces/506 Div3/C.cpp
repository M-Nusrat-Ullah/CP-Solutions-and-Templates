#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("C input.txt","r",stdin);
    int g,t,z,re=1e9,maxa=1e-9,mini=1e9;
    bool l=true,k=true;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++){
        scanf("%d %d",&z,&wq[g]);
        if(z>maxa)maxa=z;
        if(wq[g]<mini)mini=wq[g];
    }
    if(maxa>mini)k=false;
    for(g=0;g<t&&k;g++){
        if(wq[g]-maxa<re&&l){
            if(wq[g]==mini){
                l=false;
                continue;
            }
            re=wq[g]-maxa;
        }
        if(wq[g]-maxa<re&&l==false)re=wq[g]-maxa;
    }
    if(k)printf("%d\n",re);
    else printf("0\n");
    return 0;
}
