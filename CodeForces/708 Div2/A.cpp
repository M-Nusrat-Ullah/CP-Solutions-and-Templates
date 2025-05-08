#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,wq[103],nt[103];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<=100;g++)nt[g]=0;
        for(g=0;g<y;g++){
            scanf("%d",&wq[g]);
            nt[wq[g]]++;
        }
        for(g=0;g<=100;g++)if(nt[g]){
            printf("%d ",g);
            nt[g]--;
        }
        for(g=0;g<=100;g++)if(nt[g]){
            while(nt[g]--)printf("%d ",g);
        }
        printf("\n");
    }
    return 0;
}
