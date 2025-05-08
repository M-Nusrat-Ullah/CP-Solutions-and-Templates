#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,z,g,lo,hi;
    string q;
    scanf("%d",&t);
    while(t--){
        cin>>z>>q;
        for(g=lo=hi=0;q[g];g++){
            if(q[g]=='1'&&!lo)lo=g+1;
            if(q[q.length()-g-1]=='1'&&!hi)hi=g+1;
        }
        printf("%d\n",!lo?z:z*2-min(lo-1,z-hi)*2);
    }
    return 0;
}
