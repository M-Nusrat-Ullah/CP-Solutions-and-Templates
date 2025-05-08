#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int g,h,t,y,nt=0;
    scanf("%d %d",&t,&y);
    ll a[t+3][y+3],b[t+3][y+3];
    for(g=0;g<t;g++)
        for(h=0;h<y;h++) scanf("%lld",&a[g][h]);
    for(g=0;g<t;g++)
        for(h=0;h<y;h++) scanf("%lld",&b[g][h]);
    for(g=0;g<t;g++)
        for(h=0;h<y&&h<t;h++)
            if(a[h][g]!=b[g][h]){
                nt++;
                break;
    }
    if(nt)printf("NO\n");
    else printf("YES\n");
    return 0;
}
