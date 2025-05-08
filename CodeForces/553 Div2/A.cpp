#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,z,mnt=0,dnt,mini=1e9;
    string q,w;
    scanf("%d",&t);
    cin>>q;
    for(g=0;q[g];g++){
        dnt=1;
        mnt=0;
        for(h=g;dnt<=4&&q[h];h++,dnt++){
            z=(int)q[h];
            if(z>78&&dnt==1)mnt+=(90-z+1);
            else if(z<=78&&dnt==1)mnt+=(z-65);
            if(z>80&&dnt==2)mnt+=(90-z+3);
            else if(z<=80&&z>=67&&dnt==2)mnt+=(z-67);
            else if(z<67&&dnt==2)mnt+=(67-z);
            if(z>71&&z<=84&&dnt==3)mnt+=(84-z);
            else if(z<=71&&dnt==3)mnt+=(z-64+6);
            else if(z>84&&dnt==3)mnt+=(z-84);
            if(z>84&&dnt==4)mnt+=(90-z+7);
            else if(z<=84&&z>=71&&dnt==4)mnt+=(z-71);
            else if(z<71&&dnt==4)mnt+=(71-z);
        }
        if(!q[h]&&dnt!=5)break;
        mini=min(mini,mnt);
    }
    printf("%d\n",mini);
    return 0;
}
