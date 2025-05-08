#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,j,t,q,w,nt,row,mini,mini1,mini2;
    char z;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        int wq[q+3][w+3]={0};
        for(g=0;g<q;g++)
            for(h=0;h<w;h++){
                cin>>z;
                if(z=='*')wq[g][h]=1;
                else wq[g][h]=-1;
        }
//        for(g=0,mini=1e9;g<q;g++){
//            for(h=0;h<w;h++){
//                if(wq[g][h]){
//                    for(f=nt=0;f<w;f++)if(wq[g][f]==-1)nt++;
//                    for(f=0;f<q;f++)if(wq[f][h]==-1&&f!=g)nt++;
//                    mini=min(mini,nt);
//                }
//            }
//        }
        for(g=0,mini1=1e9;g<q;g++){
            for(h=nt=0;h<w;h++){
                if(wq[g][h]==-1)nt++;
            }
            if(nt<mini1)mini1=nt,row=g;
        }
        for(g=0,mini2=1e9;g<w;g++){
            for(h=nt=0;h<q;h++){
                if(wq[h][g]==-1&&h!=row)nt++;
            }
            if(nt<mini2)mini2=nt;
        }
        mini=mini1+mini2;
        printf("%d\n",mini);
    }
    return 0;
}
