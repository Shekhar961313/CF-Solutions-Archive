#include<bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}


int main(){

    int n;
    cin>>n;
    string t;
    cin>>t;

    vector<int> div = getDivisors(n);

    for(int i = 0 ; i < div.size(); i++){
        reverse(t.begin(), t.begin() + div[i] );
    }

    cout<<t;


    return 0;
}