#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    
    for(int i = 0; i < n ; i++){
        
        cin>>arr[i];
    }
    int minn = arr[0];
    int maxx = arr[0];
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] > maxx){
            maxx = arr[i];
            count++;
        }
        if(arr[i] < minn){
            minn = arr[i];
            count++;
        }
    }

    cout<<count;
    return 0;
}
