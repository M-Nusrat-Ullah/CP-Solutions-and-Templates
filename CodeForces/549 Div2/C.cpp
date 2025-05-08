#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,t,x,wq[200010]={0};
    bool ck=true;
    scanf("%d",&t);
    int in[t],de[t];
    for(g=h=f=0;g<t;g++){
        scanf("%d",&x);
        wq[x]++;
        if(wq[x]>1)de[h++]=x;
        else in[f++]=x;
        if(wq[x]>2)ck=false;
    }
    sort(in,in+f);
    sort(de,de+h);
    if(ck){
        printf("YES\n%d\n",f);
        if(f==0)printf("\n");
        else{for(g=0;g<f-1;g++)printf("%d ",in[g]);
        printf("%d\n",in[g]);}
        printf("%d\n",h);
        if(h==0)printf("\n");
        else{for(g=h-1;g>0;g--)printf("%d ",de[g]);
        printf("%d\n",de[g]);}
    }
    else printf("NO\n");
    return 0;
}
