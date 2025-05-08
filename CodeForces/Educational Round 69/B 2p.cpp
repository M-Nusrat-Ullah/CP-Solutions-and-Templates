#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,x,maxa=-1e9,maxp;
    bool k=true;
    vector<int>wq;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        wq.push_back(x);
        if(x>maxa)maxa=x, maxp=g;
    }
    g=maxp-1, h=maxp+1;
    while(g>=0&&h<t){
        if(maxa>wq[g]&&wq[g]>wq[h])
            maxa=wq[g], g--;
        else if(maxa>wq[h]&&wq[h]>wq[g])maxa=wq[h], h++;
        else {k=false;break;}
    }
    while(g>=0&&maxa>wq[g]&&k)maxa=wq[g],g--;
    while(h<t&&maxa>wq[h]&&k)maxa=wq[h],h++;
    if(k&&maxa==1&&g<0&&h==t)printf("YES\n");
    else printf("NO\n");
    return 0;
}
