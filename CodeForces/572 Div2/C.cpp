#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,z;
    scanf("%d",&t);
    int wq[t+3]={0};
    for(g=1;g<=t;g++){
        scanf("%d",&z);
        wq[g]=wq[g-1]+z;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&z,&g);
        printf("%d\n",(wq[g]-wq[z-1])/10);
    }
    return 0;
}
