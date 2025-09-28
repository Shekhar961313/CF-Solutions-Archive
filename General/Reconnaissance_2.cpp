#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    int minDiff = INT_MAX;
    int idx1 = 0, idx2 = 1;

    for(int i = 1; i < n; i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        if(diff < minDiff) {
            minDiff = diff;
            idx1 = i;
            idx2 = i - 1;
        }
    }
    int circularDiff = abs(arr[n - 1] - arr[0]);
    if(circularDiff < minDiff) {
        minDiff = circularDiff;
        idx1 = 0;
        idx2 = n - 1;


    cout << idx2 + 1 << " " << idx1 + 1 << endl;

  
    }
    return 0;
}