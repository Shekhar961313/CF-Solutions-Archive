#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char current = 'a';
    int moves = 0;

    for (char ch : s) {
        int diff = abs(ch - current);
        moves += min(diff, 26 - diff);
        current = ch;
    }

    cout << moves << endl;
    return 0;
}
