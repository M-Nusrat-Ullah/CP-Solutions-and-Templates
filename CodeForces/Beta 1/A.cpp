#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double q,w,e,nt1=0,nt2=0;
    scanf("%lf %lf %lf",&q,&w,&e);
    nt1=ceil(q/e);
    nt2=ceil(w/e);
    printf("%lld\n",(ll)nt1*(ll)nt2);
    return 0;
}
