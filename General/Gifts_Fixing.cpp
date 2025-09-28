#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    int n;
    cin>>t;
    while(t--){

        cin>>n;
        vector<long long>a1(n),b1(n);

        for(int i = 0; i<n ; i++) cin>>a1[i];
        for(int i = 0; i<n ; i++) cin>>b1[i];

        int mina = *min_element(a1.begin(), a1.end());
        int minb = *min_element(b1.begin(), b1.end());

        long long moves = 0;

        for (int i = 0; i < n; i++) {
            long long yoa = a1[i] - mina;
            long long yob = b1[i] - minb;
            moves += max(yoa, yob);
        }
        cout<<moves<<endl;
    }

    return 0;
}
