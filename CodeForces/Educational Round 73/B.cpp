#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        for(h=0;h<t;h++)
            if((g+h)%2==0)printf("W");
            else printf("B");
        printf("\n");
    }
    return 0;
}
