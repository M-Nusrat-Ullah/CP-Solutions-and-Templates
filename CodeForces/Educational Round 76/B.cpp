#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        if(q==w)printf("Yes\n");
        else{
            if(q>=4)printf("Yes\n");
            else if(q==2&&w==3)printf("Yes\n");
            else if(q>w)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
