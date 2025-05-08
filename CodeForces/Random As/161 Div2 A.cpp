#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,a,b,x;
    for(g=0;g<5;g++)
        for(h=0;h<5;h++){
            scanf("%d",&x);
            if(x)a=g,b=h;
    }
    printf("%d\n",abs(a-2)+abs(b-2));
    return 0;
}
