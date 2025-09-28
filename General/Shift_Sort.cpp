#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count1++;
            }
        }

        int ans = 0;
        for (int i = n - 1; i >= n - count1; i--) {
            if (s[i] == '0') {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}