#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ns,t,y,re;
    cin>>t>>y;
    re=((t*t)+(y*y))/(2*t)-t;
    printf("%.11f\n",re);
    return 0;
}
