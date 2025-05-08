#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,re,b,y,q,w;
    scanf("%i",&t);
    while(t--){
        scanf("%i %i %i %i",&b,&y,&q,&w);
        b--;
        re=(b-w*y)/(q-w);
        if(b/w<y)printf("-1\n");
        else printf("%i\n",min(y,re));
    }
    return 0;
}
