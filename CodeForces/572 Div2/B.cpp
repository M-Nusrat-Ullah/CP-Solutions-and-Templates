#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g;
    bool k;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    sort(wq,wq+t);
    if(wq[t-1]>=wq[t-2]+wq[t-3])printf("NO\n");
    else{
        printf("YES\n%d %d %d",wq[t-3],wq[t-1],wq[t-2]);
        for(g=t-4;g>=0;g--)printf(" %d",wq[g]);
        printf("\n");
    }
    return 0;
}
