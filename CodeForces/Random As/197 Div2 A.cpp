#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,g;
    char q;
    vector<int>wq;
    scanf("%d",&x);
    wq.push_back(x);
    while(q=getchar()!='\n'){
        scanf("%d",&x);
        wq.push_back(x);
    }
    sort(wq.begin(),wq.end());
    for(g=0;g<wq.size()-1;g++)printf("%d+",wq[g]);
    printf("%d\n",wq[g]);
    return 0;
}
