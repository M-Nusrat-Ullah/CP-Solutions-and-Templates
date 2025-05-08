#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    scanf("%d",&q);
    if(q%4==0)printf("1 A\n");
    else if(q%4==1)printf("0 A\n");
    else if(q%4==2)printf("1 B\n");
    else if(q%4==3)printf("2 A\n");
    return 0;
}
