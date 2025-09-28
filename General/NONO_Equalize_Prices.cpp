#include<bits/stdc++.h>
using namespace std;

int avg( vector<int> arr, int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum+=arr[i];
    }

    return sum/n;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0 ; i<n; i++){
            cin>>arr[i];
        }
        int avgi = avg(arr, n);

        auto it = *min_element(arr.begin(), arr.end());

        if(avgi + 1 <= k){
            cout<<it + k<<endl;
        }else if( avgi + 1 > k){
            cout<<-1<<endl;
        }
        else{
            cout<<avgi + 1<<endl;
        }
    }
return 0;
}