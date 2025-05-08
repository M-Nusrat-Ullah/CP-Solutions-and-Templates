#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,nt,wq[100003],k[13]={0},ma=1e-9;
    cin>>t;
    for(g=0;g<t;g++)cin>>wq[g];
    for(g=0;g<t;g++)k[wq[g]]++;
    for(g=nt=0;g<10;g++){
        for(h=0;h<10;h++){
            if(k[g]==k[h])nt++;
        }
        ma=max(ma,nt);
    }
}
