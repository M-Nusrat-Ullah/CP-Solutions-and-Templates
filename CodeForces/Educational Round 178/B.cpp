#include<iostream>
#include<algorithm>
using namespace std;

int a[1000005], maxi[1000005];
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++) {
            maxi[i] = 0;
        }
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            maxi[i] = max(maxi[i - 1], a[i]);
        }
        long long res = 0;
        cout << maxi[n] << endl;
        for(int i = n; i > 1; i--){
            res += a[i];
            cout << res + maxi[i - 1] << endl;
        }
        // cout << res + a[1] << endl;
    }
    return 0;
}