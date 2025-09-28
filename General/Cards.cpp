#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i].first;
        cards[i].second = i + 1;
    }

    sort(cards.begin(), cards.end());

    int left = 0;
    int right = n - 1;

    while (left < right) {
        cout << cards[left].second << " " << cards[right].second << "\n";
        left++;
        right--;
    }

    return 0;
}