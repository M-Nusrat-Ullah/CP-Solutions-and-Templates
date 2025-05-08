#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,q,w,a,s,hz,wnt,bnt;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&y,&q,&w,&a,&s);
        hz=(max(q,w)-min(q,w))>>1;
        wnt=min(q,w)+hz;
        bnt=y-max(q,w)+hz;
        printf("%s\n",(wnt>=a&&bnt>=s)?"YES":"NO");
    }
    return 0;
}
