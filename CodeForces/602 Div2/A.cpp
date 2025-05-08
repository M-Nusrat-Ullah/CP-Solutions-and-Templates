#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,z,x,xx1,xx2,nn1,nn2;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        xx1=xx2=-1e9;
        nn1=nn2=1e9;
        while(y--){
            scanf("%d %d",&z,&x);
            nn1=min(nn1,z);
            xx1=max(xx1,z);
            nn2=min(nn2,x);
            xx2=max(xx2,x);
        }
        printf("%d\n",max(0,min(min(xx1-nn1,xx1-nn2),min(xx2-nn1,xx2-nn2))));
    }
    return 0;
}
