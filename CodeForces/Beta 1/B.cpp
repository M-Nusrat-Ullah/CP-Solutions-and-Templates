#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x;
    string q,z;
    scanf("%d",&t);
    while(t--){
        cin>>q;
        for(g=q.length()-1;q[g]!='C';g--)
            z+=q[g];
        reverse(z.begin(),z.end());
        x=atoi(z.c_str());
        cout<<x<<" "<<z<<endl;
    }
    return 0;
}
