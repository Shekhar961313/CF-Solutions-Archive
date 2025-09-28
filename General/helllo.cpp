#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        
        vector<int> arr(n);

        int k_count = 0;

        for(int i = 0; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == k){
                k_count++;
            }
        }

        sort(arr.begin(), arr.end());


        int missing_count = k - (distance(arr.begin(), unique(arr.begin(), lower_bound(arr.begin(), arr.end(), k))));
        
        cout << max(k_count, missing_count) << endl;
    }

    return 0;
}