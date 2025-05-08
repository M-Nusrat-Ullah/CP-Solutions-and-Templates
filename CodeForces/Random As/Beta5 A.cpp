#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,nt=0,re=0;
    string q;
    while(getline(cin,q)){
        if(q[0]=='+')nt++;
        else if(q[0]=='-')nt--;
        else{
            for(g=0;q[g]!=':';g++);
            re+=(q.length()-g-1)*nt;
        }
        q.clear();
    }
    printf("%d\n",re);
    return 0;
}
