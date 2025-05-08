#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long z,x;
    scanf("%d",&t);
    while(t--){
        scanf("%I64d %I64d",&z,&x);
        if(z-x>1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
