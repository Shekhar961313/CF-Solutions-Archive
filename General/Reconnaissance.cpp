#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,d;
    cin>>n>>d;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int count = 0;

    for(int i = 0; i<n-1; i++){
        for(int j = i + 1; j<n; j++){
            if(abs(arr[i] - arr[j]) <= d){
                count += 2;
            }
        }
    }

    cout<<count;

    return 0;
}