#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,g,ba,ac,k[200010];
    bool ck=true;
    scanf("%d",&a,&b,&c);
    for(g=0;g<a;g++)scanf("%d",&k[g]);
    ba=b, ac=c;
    for(g=0;g<a&&ba!=0&&ck;g++){
        if(ac==c&&ac)ac--;
        else if(k[g]&&ac!=c&&ba)ba--,ac++;
        else if(!k[g]&&ac)ac--;
        else if(!k[g]&&!ac&&ba)ba--;
        else ck=false;
        if(ba==0)break;
    }
    printf("%d\n",g);
    return 0;
}
