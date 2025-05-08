#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,h,f,t,nt=0;
    scanf("%d %d %d",&b,&g,&t);
    for(h=t,f=0;h>=0;h--,f++)
        if(h<=b&&f<=g)nt++;
    printf("%d\n",nt);
    return 0;
}
