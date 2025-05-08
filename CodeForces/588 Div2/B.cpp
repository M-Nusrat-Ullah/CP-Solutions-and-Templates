#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y;
    string q,re;
    scanf("%d %d",&t,&y);
    cin>>q;
    if(t==1&&y)re+='0';
    else for(g=0;q[g];g++){
        if(!g&&y){
            re+='1';
            if(q[g]!='1')y--;
        }
        else if(y){
            re+='0';
            if(q[g]!='0')y--;
        }
        else re+=q[g];
    }
    cout<<re<<endl;
    return 0;
}
