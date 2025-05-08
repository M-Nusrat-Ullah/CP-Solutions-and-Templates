#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&q);
        if(q==2)printf("2\n");
        else if(q&1)printf("1\n");
        else printf("0\n");
    }
    return 0;
}
