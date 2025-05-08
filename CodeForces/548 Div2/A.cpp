#include<bits/stdc++.h>
using namespace std;
int main()
{
    char z;
    int t,i,g,re=0;
    scanf("%d ",&t);
    for(g=0;g<t;g++){
        scanf("%c",&z);
        if(((int)z-48)%2==0)for(i=0;i<=g;i++)re++;
    }
    printf("%d\n",re);
    return 0;
}
