#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,num[5];
    for(g=0;g<4;g++)scanf("%d",&num[g]);
    sort(num,num+g);
    printf("%d %d %d\n",num[3]-num[0],num[3]-num[1],num[3]-num[2]);
    return 0;
}
