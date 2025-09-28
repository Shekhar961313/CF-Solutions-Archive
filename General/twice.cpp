#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int score = 0;
        for (auto& pair : freq) {
            score += pair.second / 2;
        }

        cout << score << endl;
    }

    return 0;
}
