#include<bits/stdc++.h>
using namespace std;
int main()
{
    int wq[200002],t,g,h,f,nt=0;
    int ev=-11,od=-7,en[100003]={0},dd[100002]={0};
    scanf("%d",&t);
    for(g=0,h=0,f=0;g<t;g++){
        scanf("%d",&wq[g]);
        if(g==0)en[f++]=wq[g];
        else if(g==1)dd[h++]=wq[g];
        if((g>1)&&(g&1)){
            dd[h]=wq[g]+dd[h-1];
            h++;
        }
        else if(g>1&&(g%2==0)){
            en[f]=wq[g]+en[f-1];
            f++;
        }
    }
    for(g=0;g<t;g++){
        if(t==1)nt++;
        else if(g&1){
            if(g==1){
                ev=dd[h-1]-dd[0]+en[0];
                od=en[f-1]-en[0];
            }
            else{
                od=dd[(g/2)-1]+en[f-1]-en[g/2];
                ev=en[g/2]+dd[h-1]-dd[g/2];
            }
        }
        else{
            if(g==0){
                ev=dd[h-1];
                od=en[f-1]-en[0];
            }
            else{
                od=dd[(g/2)-1]+en[f-1]-en[g/2];
                ev=en[(g/2)-1]+dd[h-1]-dd[(g/2)-1];
            }
        }
        if(ev==od)nt++;
    }
    printf("%d\n",nt);
    return 0;
}
