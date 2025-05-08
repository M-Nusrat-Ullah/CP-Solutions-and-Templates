#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1,q,w,re1,re2;
    scanf("%d %d %d",&t,&q,&w);
    t1=t;
    re1=(t1/q)*q, t1-=re1, re1+=(t1/w)*w;
  //  re2=(t/w)*w, t-=re2, re2+=(t/q)*q;
    printf("%d\n",t-re1);
    return 0;
}
