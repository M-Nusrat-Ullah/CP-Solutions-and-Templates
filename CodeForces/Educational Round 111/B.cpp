#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,nt1,nt2,t;
    scanf("%d",&t);
    while(t--){
        int y,q,w;
        string a;
        scanf("%d %d %d",&y,&q,&w);
        cin>>a;
        for(g=h=nt1=nt2=0;a[g];g=h){
            while(a[g]==a[h])h++;
            if(a[g]=='0')nt1++;
            else nt2++;
        }
        printf("%d\n",max((q+w)*y,(q*y)+((min(nt1,nt2)+1)*w)));
    }
    return 0;
}
