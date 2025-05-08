#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,nt=0;
    string q,i1="X++",i2="++X";
    scanf("%d",&t);
    while(t--){
        cin>>q;
        if(q==i1||q==i2)nt++;
        else nt--;
    }
    printf("%d\n",nt);
    return 0;
}
