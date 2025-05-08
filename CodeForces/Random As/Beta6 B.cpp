#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nt=0,k[100]={0};
    char q;
    string wq[103];
    cin>>t>>y>>q;
    for(g=0;g<t;g++)
        cin>>wq[g];
    for(g=0;g<t;g++)
        for(h=0;h<y;h++)
            if(isupper(wq[g][h]))
                k[(int)wq[g][h]]=1;
    for(g=0;g<t;g++)
        for(h=0;h<y;h++)
            if(wq[g][h]==q){
                if(g>0)if(k[wq[g-1][h]]&&isupper(wq[g-1][h])&&wq[g-1][h]!=q)nt++,k[wq[g-1][h]]=0;
                if(h>0)if(k[wq[g][h-1]]&&isupper(wq[g][h-1])&&wq[g][h-1]!=q)nt++,k[wq[g][h-1]]=0;
                if(g<t-1)if(k[wq[g+1][h]]&&isupper(wq[g+1][h])&&wq[g+1][h]!=q)nt++,k[wq[g+1][h]]=0;
                if(h<y-1)if(k[wq[g][h+1]]&&isupper(wq[g][h+1])&&wq[g][h+1]!=q)nt++,k[wq[g][h+1]]=0;
    }
    printf("%d\n",nt);
    return 0;
}
