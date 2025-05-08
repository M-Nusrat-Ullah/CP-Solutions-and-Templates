#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,t,s;
    string q;
    cin>>t>>s>>q;
    for(g=0;g<s;g++)
        for(h=0;q[h+1];h++)
            if(q[h]=='B'&&q[h+1]=='G'){
                swap(q[h],q[h+1]);
                h++;
    }
    cout<<q<<endl;
    return 0;
}
