#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,nt=0;
    string q;
    cin>>t>>q;
    for(g=0;q[g];g++){
        if(q[g]=='(')nt++;
        else nt--;
    }
    if(nt<=1&&nt>=-1)printf("Yes\n");
    else printf("No\n");
    return 0;
}
