#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,nt=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        if(q&&w||q&&e||w&&e)nt++;
    }
    printf("%d\n",nt);
    return 0;
}
