#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,f,b,h,l,x,y,z,re=0;
    scanf("%d %d %d",&b,&h,&l);
    vector<int>building(b,h);
    for(g=0;g<l;g++){
        scanf("%d %d %d",&x,&y,&z);
        for(f=x-1;f<y;f++)
            building[f]=min(building[f],z);
    }
    for(g=0;g<building.size();g++)
        re+=(building[g]*building[g]);
    printf("%d\n",re);
    return 0;
}
