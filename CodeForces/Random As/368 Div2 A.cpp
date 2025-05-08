#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y;
    string q;
    bool k=false;
    scanf("%d %d",&t,&y);
    for(g=0;g<=t;g++){
        getline(cin,q);
        for(h=0;q[h];h++)
            if(q[h]=='C'||q[h]=='M'||q[h]=='Y')
                k=true;
    }
    if(k)printf("#Color\n");
    else printf("#Black&White\n");
    return 0;
}
