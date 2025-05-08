#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x;
    ll t,y;
    bool k=true;
    scanf("%I64d",&t);
    if(!(t&1)) k=false;
    else x=1,y=(t-3)/2;
    if(k&&y>0)printf("%d %I64d\n",x,y);
    else printf("NO\n");
    return 0;
}
