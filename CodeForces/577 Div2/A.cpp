#include<bits/stdc++.h>
using namespace std;
int main()
{
    int re,g,h,t,y,maxa,v[1003];
    string q[1003];
    scanf("%d %d",&t,&y);
    for(g=0;g<t;g++)
        cin>>q[g];
    for(g=0;g<y;g++)
        scanf("%d",&v[g]);
    for(g=re=0;g<y;g++){
        int wq[7]={0};
        for(h=0;h<t;h++)
            wq[q[h][g]-'A']++;
        for(h=maxa=0;h<5;h++)
            maxa=max(maxa,wq[h]);
        re+=v[g]*maxa;
    }
    printf("%d\n",re);
    return 0;
}
