#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,nt=0;
    scanf("%d %d",&q,&w);
    if(w%q)printf("-1\n");
    else{
        w/=q;
        while(!(w%2)){
            nt++;
            w/=2;
        }
        while(!(w%3)){
            nt++;
            w/=3;
        }
        if(w!=1)printf("-1\n");
        else printf("%d\n",nt);
    }
    return 0;
}
