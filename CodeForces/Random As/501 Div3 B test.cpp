#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a, b, c, d;
    cin>>n>>a>>b;
    c=a, d=b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if (c!=d) {
        cout<<-1<<endl; return 0;
    }
    vector<int> ans;
    while (a!=b) {
        for (int i=0; i<n; i++) {
            int t=a.find(b[i], i);
            if (t!=i) {
                swap(a[t], a[t-1]);
                ans.push_back(t);
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto &j:ans)cout<<j<<" ";
    cout<<endl;
    return 0;
}
