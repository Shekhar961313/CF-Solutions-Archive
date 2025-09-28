#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;


    map<char, int> expected, actual;
    for (char ch : guest) expected[ch]++;
    for (char ch : host) expected[ch]++;


    for (char ch : pile) actual[ch]++;

    if (expected == actual) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
