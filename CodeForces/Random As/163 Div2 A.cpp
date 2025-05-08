#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,nt=0;
    string q;
    cin>>t>>q;
    for(g=0;g<t-1;g++)
        if(q[g]==q[g+1])nt++;
    printf("%d\n",nt);
    return 0;
}

