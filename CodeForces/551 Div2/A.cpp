#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,g,h,lo,ans,arrive,mini=1e9;
    bool k=false;
    scanf("%d %d",&n,&t);
    vector<int>start(n),dif(n);
    for(g=0;g<n;g++)scanf("%d %d",&start[g],&dif[g]);
    for(g=0;g<n;g++){
        if(!k&&start[g]==t){ans=g,k=true; break;}
        if(!k&&start[g]>t&&start[g]<mini)ans=g,mini=min(mini,start[g]);
    }
    for(g=0;g<n&&!k;g++){
        arrive=start[g];
        while(arrive+dif[g]<t)arrive+=dif[g];
        if(arrive+dif[g]<mini)ans=g,mini=min(mini,arrive+dif[g]);
    }
    printf("%d\n",ans+1);
    return 0;
}
