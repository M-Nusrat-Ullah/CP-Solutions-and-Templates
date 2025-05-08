#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,k[130]={0},nt=0;
    string q;
    cin>>q;
    for(g=0;q[g];g++){
        if(!k[(int)q[g]])nt++;
        k[(int)q[g]]++;
    }
    if(nt&1)printf("IGNORE HIM!\n");
    else printf("CHAT WITH HER!\n");
    return 0;
}
