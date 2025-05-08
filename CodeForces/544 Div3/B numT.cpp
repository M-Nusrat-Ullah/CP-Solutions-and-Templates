#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,q,w,x,re=0;
    scanf("%d %d",&q,&w);
    int wq[w+3]={0};
    for(g=0;g<q;g++){
        scanf("%d",&x);
        wq[x%w]++;
    }
    for(g=1;g<(w+1)/2;g++)re+=min(wq[g],wq[w-g]);
    re+=wq[0]/2;
    if(!(w%2))re+=wq[w/2]/2;
    printf("%d\n",re*2);
    return 0;
}
