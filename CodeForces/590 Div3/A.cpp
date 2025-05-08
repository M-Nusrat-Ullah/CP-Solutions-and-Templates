#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x;
    double re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=re=0;g<y;g++){
            scanf("%d",&x);
            re+=x;
        }
        re=ceil(re/y);
        printf("%d\n",(int)re);
    }
    return 0;
}
