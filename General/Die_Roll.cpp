#include<bits/stdc++.h>
using namespace std;

int main(){

    int Y, W;
    cin >> Y >> W;

    int max_val = max(Y, W);
    int favorable = 6 - max_val + 1;
    int total = 6;

    int g = __gcd(favorable, total);
    cout << favorable / g << "/" << total / g;


}
