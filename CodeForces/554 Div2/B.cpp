#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,wq[35];
    bitset<10000010>k;
    k.reset();
    for(g=0;g<21;g++){
        k[(1<<g)-1]=1;
        wq[g]=(1<<g)-1;
    }
    for(g=0;g<21;g++)printf("%d\n",wq[g]);
}
