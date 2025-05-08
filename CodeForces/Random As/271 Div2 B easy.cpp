#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x;
    scanf("%d",&t);
    int wq[t+3]={0};
    for(g=1;g<=t;g++){
        scanf("%d",&x);
        wq[g]=x+wq[g-1];
    }
    scanf("%d",&y);
    while(y--){
        scanf("%d",&x);
        printf("%d\n",lower_bound(wq+1,wq+1+t,x)-wq);
    }
    return 0;
}

