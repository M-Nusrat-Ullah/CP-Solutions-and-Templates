#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        if(__gcd(q,w)==1)
            printf("Finite\n");
        else printf("Infinite\n");
    }
    return 0;
}
