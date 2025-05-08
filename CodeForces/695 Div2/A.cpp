#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q;
    string a="989",s;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&q);
        if(q<=3){
            for(g=0;g<q;g++)
                printf("%c",a[g]);
        }
        else{
            s.resize(q);
            for(g=0;g<q-3;g++)
                s[g]=char((g%10)+'0');
            printf("989");
            for(g=0;g<q-3;g++)
                printf("%c",s[g]);
            s.clear();
        }
        printf("\n");
    }
    return 0;
}
