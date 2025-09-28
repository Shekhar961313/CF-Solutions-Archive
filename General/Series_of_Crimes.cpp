#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> stars;

    for(int i = 0; i < n; i++) {
        string row;
        cin >> row;                         // inputed rows as a string = n times
        for(int j = 0; j < m; j++) {   // m is used to search the * in the string  
            if(row[j] == '*') {
                stars.push_back({i, j});
            }
        }
    }

    int r4 = stars[0].first ^ stars[1].first ^ stars[2].first;    // XNOR is used to find the row and column which existed only once
    int c4 = stars[0].second ^ stars[1].second ^ stars[2].second;

    cout << r4 + 1 << " " << c4 + 1 << endl; // +1 because rows/columns start from 1
}
