#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h,i,j,g;
    scanf("%d %d %d",&n,&m,&h);
    int height[m+3],length[n+3];
    for(g=0;g<m;g++)scanf("%d",&height[g]);
    for(g=0;g<n;g++)scanf("%d",&length[g]);
    int block[n+3][m+3];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&block[i][j]);
            if(block[i][j]) block[i][j]=min(height[j],length[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",block[i][j]);
        printf("\n");
    }
    return 0;
}
