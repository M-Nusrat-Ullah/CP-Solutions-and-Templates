#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w;
    scanf("%d %d",&q,&w);
    printf("%d\n",min(min(q,w),(q+w)/3));
    return 0;
}
