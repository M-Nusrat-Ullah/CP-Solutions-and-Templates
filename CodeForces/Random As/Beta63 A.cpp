#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,y,z,sx,sy,sz;
    scanf("%d",&t);
    for(g=sx=sy=sz=0;g<t;g++){
        scanf("%d %d %d",&x,&y,&z);
        sx+=x, sy+=y, sz+=z;
    }
    if(!sx&&!sy&&!sz)printf("YES\n");
    else printf("NO\n");
    return 0;
}
