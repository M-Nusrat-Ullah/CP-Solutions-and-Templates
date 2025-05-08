#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,y;
    scanf("%I64d %I64d",&t,&y);
    if((t/y)&1)printf("YES\n");
    else printf("NO\n");
    return 0;
}
