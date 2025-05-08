#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,re;
    string q;
    scanf("%d",&t);
    cin>>q;
    for(g=2,re=0;g<=t;g+=2)
        if(q[g-1]=='a'&&q[g-2]=='a')re++, q[g-1]='b';
        else if(q[g-1]=='b'&&q[g-2]=='b')re++, q[g-2]='a';
    printf("%d\n",re);
    cout<<q<<endl;
    return 0;
}
