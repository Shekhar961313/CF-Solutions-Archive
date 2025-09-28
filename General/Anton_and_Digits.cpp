#include<bits/stdc++.h>
using namespace std;

int main(){

    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int ans = 0;
    int min1 = 0;
    min1 = min(min(k2, k5), k6);

    ans = ans + (256*min1);
    k2 = k2-min1;

    int min2 = 0;
    min2 = min(k2, k3);

    ans = ans + (32 * min2);
    cout<<ans;

    return 0;
}

