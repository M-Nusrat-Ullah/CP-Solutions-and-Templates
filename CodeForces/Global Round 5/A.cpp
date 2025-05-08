#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,ntn=0,nte=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x&1)
            if(x<0){
                ntn++;
                if(ntn&1)printf("%d\n",x/2);
                else printf("%d\n",--x/2);
            }
            else{
                nte++;
                if(nte&1)printf("%d\n",x/2);
                else printf("%d\n",++x/2);
            }
        else printf("%d\n",x/2);
    }
    return 0;
}
