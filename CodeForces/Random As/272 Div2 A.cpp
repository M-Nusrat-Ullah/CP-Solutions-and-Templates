#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,y,nt=0;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d %d",&x,&y);
        if(y-x>=2)nt++;
    }
    printf("%d\n",nt);
    return 0;
}
