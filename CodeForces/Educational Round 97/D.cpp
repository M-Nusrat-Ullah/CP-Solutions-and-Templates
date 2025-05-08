#include<bits/stdc++.h>
using namespace std;
int wq[200003],kk[200003];
queue<int>qq;
int main()
{
    int g,h,f,t,y,nt;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++)
            scanf("%d",&wq[g]);
        while(!qq.empty())qq.pop();
        qq.push(1);
        g=h=1;
        kk[0]=0;
        while(!qq.empty()&&g<y){
            nt=qq.front();
            qq.pop();
            while(h<y&&nt--){
                f=h+1;
                while(wq[f]>wq[f-1]&&f<y)f++;
                qq.push(f-h);
                kk[f-1]=kk[g-1]+1;
                h=f;
            }
            g=h;
        }
        printf("%d\n",kk[y-1]);
    }
    return 0;
}
