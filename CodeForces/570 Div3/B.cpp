#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int g,t,y,d,x,maxa,mini;
    ll re;
    scanf("%i",&t);
    while(t--){
        scanf("%i %i",&y,&d);
        maxa=-1e9, mini=1e9;
        for(g=0;g<y;g++){
            scanf("%i",&x);
            if(x>maxa)maxa=x;
            if(x<mini)mini=x;
        }
        re=mini+d;
        if(maxa-d<=re)printf("%I64d\n",re);
        else printf("-1\n");
    }
    return 0;
}
