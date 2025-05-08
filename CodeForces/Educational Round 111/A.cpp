#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&q);
        x=sqrt(q*1.00);
        printf("%d\n",x*x==q?x:x+1);
    }
    return 0;
}
