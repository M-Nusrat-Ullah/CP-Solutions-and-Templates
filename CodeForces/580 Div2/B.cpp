#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,o=0,z=0;
    long long nt=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x>0)nt+=(x-1);
        else if(x<0)o++, nt+=(abs(x)-1);
        else z++, nt++;
    }
    if(o&1&&!z)nt+=2;
    printf("%I64d\n",nt);
    return 0;
}
