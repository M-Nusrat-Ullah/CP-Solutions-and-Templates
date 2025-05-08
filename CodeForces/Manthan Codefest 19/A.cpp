#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e,re[5];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&re[0],&re[1],&e);
        re[2]=re[0]^re[1];
        printf("%d\n",re[e%3]);
    }
    return 0;
}
