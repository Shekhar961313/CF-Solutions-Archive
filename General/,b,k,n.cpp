#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int total_ones = 0;

        for (int i = 0; i < n; i++) {
            string temp = s;
            // Flip the i-th bit
            temp[i] = (temp[i] == '0') ? '1' : '0';

            // Count 1s in this modified string
            for (char c : temp) {
                if (c == '1') total_ones++;
            }
        }

        cout << total_ones << endl;
    }

    return 0;
}
