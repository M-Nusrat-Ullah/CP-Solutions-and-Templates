#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,e;
    scanf("%d %d %d",&q,&w,&e);
    printf("%d\n",min(min(2*q+2*w,q+w+e),min(2*q+2*e,2*w+2*e)));
    return 0;
}
