#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long q,w,e;
    scanf("%d",&t);
    while(t--){
        scanf("%I64d %I64d %I64d",&q,&w,&e);
        printf("%I64d\n",(q+w+e)/2);
    }
    return 0;
}
