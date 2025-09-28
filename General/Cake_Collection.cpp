#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    
        int n, m;
        cin>>n>>m;

        vector<int>arr(n);
        for(int i = 0 ; i< n; i++){
            cin>>arr[i];
        }
        int sum = 0;
        sort(arr.begin(), arr.end(), greater<int>());

        for(int i = 0; i <= arr.size() - 1; i++){
            sum = sum + m*arr[i];
            m--;
        }
        
        cout<<sum<<endl;

    }

    return 0;
}