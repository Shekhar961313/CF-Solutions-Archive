#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    int count = 1;

    for(int i = 0; i < n-1 ; i++){
        if(arr[i + 1] - arr[i] >= c+1){
            count = 1;

        }else{
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}