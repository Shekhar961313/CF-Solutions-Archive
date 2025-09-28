#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin, n);

    char m = '\0';

    for (int i = n.size() - 1; i >= 0; --i) {
        if (isalpha(n[i])) {
            m = tolower(n[i]);
            break;
        }
    }

    if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u' || m == 'y') {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}