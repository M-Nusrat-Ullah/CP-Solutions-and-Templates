#include<bits/stdc++.h>
using namespace std;
int digit_sum(int x)
{
    int re=0;
    while(x){
        re+=(x%10);
        x/=10;
    }
    return re;
}
int main()
{
    int t,x,re;
    scanf("%i",&t);
    x=t;
    re=digit_sum(x);
    while(re%4){
        x++;
        re=digit_sum(x);
    }
    printf("%d\n",x);
    return 0;
}
