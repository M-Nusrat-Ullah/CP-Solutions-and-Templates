#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,wq[13][13];
    for(g=1;g<11;g++)
        for(h=1;h<11;h++)wq[g][h]=1;
    for(g=2;g<11;g++)
        for(h=2;h<11;h++)
            wq[g][h]=wq[g-1][h]+wq[g][h-1];
    scanf("%d",&t);
    printf("%d\n",wq[t][t]);
    return 0;
}
