#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,g,nt1=0,nt2=0,tre,key;
    scanf("%d %d",&t,&y);
    for(g=0;g<t;g++){
        scanf("%d",&tre);
        if(tre&1)nt1++;
    }
    for(g=0;g<y;g++){
        scanf("%d",&key);
        if(key&1)nt2++;
    }
    printf("%d\n",min(nt1,y-nt2)+min(nt2,t-nt1));
    return 0;
}
