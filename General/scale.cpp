#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        char grid[1000][1001]; 

        for (int i = 0; i < n; ++i) {
            cin >> grid[i]; 
        }

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
