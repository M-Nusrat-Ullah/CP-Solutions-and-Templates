#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h;
    string q,k="HQ9";
    cin>>q;
    for(g=0;q[g];g++)
        for(h=0;k[h];h++)
            if(q[g]==k[h]){
                printf("YES\n");
                return 0;
    }
    printf("NO\n");
    return 0;
}
