#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,nt;
    scanf("%d",&t);
    int wq[t+3],re[t+3];
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    for(g=1,nt=0;g<t;){
        while(((wq[g-1]*1.0)/2.0)>=wq[g]){
            nt++;
            continue;
        }
        re[g-1]=nt+1;
    }
}
