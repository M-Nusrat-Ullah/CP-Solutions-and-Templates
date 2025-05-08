#include<iostream>
#include<algorithm>
using namespace std;

int a[100];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, ans;
        cin >> s;
        if (s.back() == 'B' && s[0] == 'B') ans = "Bob";
        else if (s.back() == 'A' && s[0] == 'A') ans = "Alice";
        else if (s.length() == 2)
        {
            /* code */
            ans = s[0] == 'B' ? "Bob" : "Alice";
        }
        else if (s.back() != s[0]) {
            if (s[0] == 'B') ans = s[s.length() - 2] == 'A' ? "Alice" : "Bob";
            else {
                ans = "Alice";
                for (int i = 1; i < s.length() - 1; i++) {
                    if (s[i] == 'B') { 
                        ans = "Bob";
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}