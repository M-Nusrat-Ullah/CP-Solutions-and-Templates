#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,ma=-11,nt=0,ck=0,fk=0,z;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++){
        scanf("%d",&wq[g]);
        if(!ck&&wq[g]==0){
            z=g;
            ck=1;
        }
        if(!fk&&wq[g]==1)fk++;
    }
    for(g=0,h=1;h<t+z;g++,h++){
        if(wq[g%t]==wq[h%t]&&wq[g%t]==1&&wq[h%t]==1){
            nt++;
            continue;
        }
        ma=max(ma,nt);
        nt=0;
    }
    ma=max(ma,nt);
    if(ma<t&&ma)printf("%d\n",ma+1);
    else if(ma==t)printf("%d\n",ma);
    else if(!ma&&fk)printf("1\n");
    else printf("0\n");
    return 0;
}
