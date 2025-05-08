#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("A input.txt","r",stdin);
    int g,t,nt=0;
    bool k=true;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    for(g=1;g<t;g++){
        if(wq[g]==2&&wq[g-1]==3||wq[g]==3&&wq[g-1]==2){
            k=false;
            break;
        }
        if(wq[g]==1&&wq[g-1]==2||wq[g]==2&&wq[g-1]==1)
            nt+=3;
        else if(wq[g]==1&&wq[g-1]==3||wq[g]==3&&wq[g-1]==1)
            nt+=4;
        if(g>=2&&wq[g]==2&&wq[g-2]==3)nt--;
    }
    if(k)printf("Finite\n%d\n",nt);
    else printf("Infinite\n");
    return 0;
}
