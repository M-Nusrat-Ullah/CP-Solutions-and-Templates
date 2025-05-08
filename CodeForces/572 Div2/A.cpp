#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,re;
    size_t o,z;
    string q,ns1,ns2;
    scanf("%d",&t);
    cin>>q;
    o=count(q.begin(),q.end(),'1');
    z=t-o;
    if(z!=o)re=1,ns1=q;
    else{
        re=2;
        ns1=q[0];
        ns2=q.substr(1);
    }
    if(re==1){
        printf("%d\n",re);
        cout<<ns1<<endl;
    }
    else{
        printf("%d\n",re);
        cout<<ns1<<" "<<ns2<<endl;
    }
    return 0;
}
