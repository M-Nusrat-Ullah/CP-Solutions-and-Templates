#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,e,w;
    bool k;
    string q[103];
    scanf("%d %d",&e,&w);
    for(g=0;g<e;g++)
        cin>>q[g];
    for(g=0;g<e;g++){
        for(h=0;h<w;h++){
            k=true;
            for(f=0;f<e;f++)if(g!=f&&q[g][h]==q[f][h])
                k=false;
            if(k)for(f=0;f<w;f++)if(h!=f&&q[g][h]==q[g][f])
                k=false;
            if(k)printf("%c",q[g][h]);
        }
    }
    printf("\n");
    return 0;
}
