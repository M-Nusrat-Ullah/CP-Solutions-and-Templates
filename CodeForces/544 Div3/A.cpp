#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,a,s;
    int re,wq,ew;
    scanf("%2d:%2d",&q,&w);
    scanf("%2d:%2d",&a,&s);
    re=(q*60)+w;
    wq=(a*60)+s;
    ew=wq-re;
    ew/=2;
    ew+=re;
    printf("%02d:%02d\n",ew/60,ew%60);
    return 0;
}
