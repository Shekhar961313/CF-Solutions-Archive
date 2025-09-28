#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int lCnt = n / 2;
    int hCnt = n - lCnt;

    long long lSum = 0, hSum = 0;
    for(int i = 0; i < lCnt; i++) lSum += a[i];
    for(int i = lCnt; i < n; i++) hSum += a[i];

    cout << lSum * lSum + hSum * hSum << endl;
    return 0;
}
