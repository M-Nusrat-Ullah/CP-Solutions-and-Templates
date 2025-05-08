#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,e,r;
    cin>>q>>w>>e>>r;
    if(q+w>e&&w+e>q&&q+e>w||q+w>r&&w+r>q&&q+r>w||q+e>r&&e+r>q&&q+r>e||w+e>r&&e+r>w&&w+r>e)
        printf("TRIANGLE\n");
    else if(q+w>=e&&w+e>=q&&q+e>=w||q+w>=r&&w+r>=q&&q+r>=w||q+e>=r&&e+r>=q&&q+r>=e||w+e>=r&&e+r>=w&&w+r>=e)
        printf("SEGMENT\n");
    else printf("IMPOSSIBLE\n");
    return 0;
}
