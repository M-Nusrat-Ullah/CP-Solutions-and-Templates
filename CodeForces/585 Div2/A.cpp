#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,k1,k2,n,n1,n2,k3,k4,m1,m2;
    scanf("%d %d %d %d %d",&p1,&p2,&k1,&k2,&n);
    k3=k1-1, k4=k2-1, n1=n2=n;
    m1=min(n1,p1*k3), n1-=m1, m2=min(n1,p2*k4), n1-=m2, n1=min(n1,p1+p2);
    m1=min(n2,p2*k4), n2-=m1, m2=min(n2,p1*k3), n2-=m2, n2=min(n2,p1+p2);
    printf("%d ",min(n1,n2));
    k3=k1, k4=k2, n1=n2=n;
    m1=min(int(n1/k3),p1), n1-=(m1*k3), m2=min(int(n1/k4),p2), n1=min(m1+m2,p1+p2);
    m1=min(int(n2/k4),p2), n2-=(m1*k4), m2=min(int(n2/k3),p1), n2=min(m1+m2,p1+p2);
    printf("%d\n",max(n1,n2));;
    return 0;
}
