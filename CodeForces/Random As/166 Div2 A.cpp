#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,x,g,h,k[5];
    bool ck;
    cin>>y;
    while(1){
        x=++y;
        ck=true;
        for(g=0;x;g++){
            k[g]=x%10;
            x/=10;
        }
        for(g=0;g<3;g++)
            for(h=g+1;h<4;h++)
                if(k[g]==k[h])ck=false;
        if(ck)break;
    }
    printf("%d\n",y);
    return 0;
}
