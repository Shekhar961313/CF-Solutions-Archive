#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> groups;
    int count = 0;

    for (char ch : s) {
        if (ch == 'B') {
            count++;
        } else {
            if (count > 0) {
                groups.push_back(count);
                count = 0;
            }
        }
    }


    if (count > 0) {
        groups.push_back(count);
    }

    cout << groups.size() << endl;
    for (int x : groups) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
