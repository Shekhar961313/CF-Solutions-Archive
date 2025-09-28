#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int> arr(n);

    int flag = 0;

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i< n; i++){
        if(arr[i]>0)
            if(arr[i] >= arr[k-1]){
                flag += 1;
            }
    }

    cout<<flag;

    return 0;
}