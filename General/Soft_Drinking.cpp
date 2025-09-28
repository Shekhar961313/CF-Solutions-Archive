#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink_toasts = (k * l) / nl;   // total toasts possible by drink
    int total_lime_toasts = (c * d);         // total lime slices
    int total_salt_toasts = p / np;          // total toasts possible by salt

    // Each friend can make minimum of all resources
    int result = min({total_drink_toasts, total_lime_toasts, total_salt_toasts}) / n;

    cout << result;
}
