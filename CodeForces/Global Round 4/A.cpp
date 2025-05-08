#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,sum,mid,half,nt;
    vector<int>re;
    scanf("%d",&t);
    int wq[t+3];
    for(g=sum=0;g<t;g++){
        scanf("%d",&wq[g]);
        sum+=wq[g];
    }
    mid=sum>>1, half=wq[0]>>1, re.push_back(1);
    for(g=nt=1,sum=wq[0];g<t;g++)
        if(wq[g]<=half)
            nt++, sum+=wq[g], re.push_back(g+1);
    if(sum<=mid)printf("0\n");
    else{
        printf("%d\n",nt);
        if(nt==1)printf("1\n");
        else{
            for(g=0;g<re.size()-1;g++)printf("%d ",re[g]);
            printf("%d\n",re[g]);
        }
    }
    return 0;
}
