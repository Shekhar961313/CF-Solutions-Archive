#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c;

        string ans = a;

        for(int i = 0; i < c.size(); i++) {
            if (c[i] == 'D') {
                ans += b[i];        
            } else if (c[i] == 'V') {
                ans = b[i] + ans;   
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
