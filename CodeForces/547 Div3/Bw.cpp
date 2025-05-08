#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,ma=-11,nt=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<2*t;g++){
        if(wq[g%t])nt++;
        else{
            ma=max(ma,nt);
            nt=0;
        }
    }
    printf("%d\n",ma);
    return 0;
}
