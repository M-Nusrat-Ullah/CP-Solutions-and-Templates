#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    size_t z;
    string q;
    scanf("%d",&t);
    while(t--){
        cin>>q;
        z=q.length();
        if(z<11)cout<<q<<endl;
        else printf("%c%d%c\n",q[0],z-2,q[z-1]);
    }
    return 0;
}
