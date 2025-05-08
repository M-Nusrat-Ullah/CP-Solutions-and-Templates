#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w;
    scanf("%d %d",&q,&w);
    if(q==9&&w==1)printf("9 10\n");
    else if(w-q!=0&&w-q!=1)
        printf("-1\n");
    else{
        if(w-q==1)printf("%d %d\n",q,w);
        else if(q==1&&w==1)printf("11 12\n");
        else if(q==2&&w==2)printf("21 22\n");
        else if(q==3&&w==3)printf("31 32\n");
        else if(q==4&&w==4)printf("41 42\n");
        else if(q==5&&w==5)printf("51 52\n");
        else if(q==6&&w==6)printf("61 62\n");
        else if(q==7&&w==7)printf("71 72\n");
        else if(q==8&&w==8)printf("81 82\n");
        else if(q==9&&w==9)printf("91 92\n");
    }
    return 0;
}
