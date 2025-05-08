#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,re;
    size_t ant;
    string q;
    cin>>q;
    l=q.length();
    ant=count(q.begin(),q.end(),'a');
    if(ant>(l-ant))cout<<l<<endl;
    else{
        re=ant+ant-1;
        cout<<re<<endl;
    }
    return 0;
}
