#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,nt1,nt2,nt3;
    bool k;
    string q,w,e;
    scanf("%d",&t);
    while(t--){
        cin>>q>>w>>e;
        int s[130]={0},t[130]={0},p[130]={0};
        for(g=0,nt1=k=1;q[g];g=h){
            h=g+1;
            while(q[g]==q[h]&&q[h])nt1++,h++;
            for(h=nt2=0;w[h];h++)
                if(q[g]==w[h])nt2++;
            for(h=0;e[h];h++)
                if(q[g]==e[h])nt3++;
            if(nt1+nt3<nt2){k=false;break;}
        }
        if(k)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
