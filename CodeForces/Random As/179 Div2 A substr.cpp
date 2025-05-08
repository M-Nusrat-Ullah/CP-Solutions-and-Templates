#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,nt=0;
    string q,i="X++++X";
    scanf("%d",&t);
    while(t--){
        cin>>q;
        if(i.find(q))nt++;
        else nt--;
    }
    printf("%d\n",nt);
    return 0;
}

