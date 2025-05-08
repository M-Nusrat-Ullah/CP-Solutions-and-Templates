#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    string q;
    bool k=true;
    cin>>q;
    for(g=0;q[g];g++)
        if(q[g]!='a'&&q[g]!='e'&&q[g]!='i'&&q[g]!='o'&&q[g]!='u'&&q[g]!='n')
            if(q[g+1]&&(q[g+1]!='a'&&q[g+1]!='e'&&q[g+1]!='i'&&q[g+1]!='o'&&q[g+1]!='u')){
                k=false;
                break;
    }
    if(q[g-1]!='a'&&q[g-1]!='e'&&q[g-1]!='i'&&q[g-1]!='o'&&q[g-1]!='u'&&q[g-1]!='n')k=false;
    if(k)printf("YES\n");
    else printf("NO\n");
    return 0;
}
