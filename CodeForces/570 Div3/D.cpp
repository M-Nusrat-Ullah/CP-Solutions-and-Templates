#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,y,x,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int nt[y+3]={0};
        for(g=re=0;g<y;g++){
            scanf("%d",&x);
            nt[x]++;
        }
        sort(nt,nt+y+1);
        for(g=y,x=y+1;g&&x>1;g--){
            x=min(x-1,nt[g]);
            re+=x;
        }
        printf("%d\n",re);
    }
    return 0;
}
