#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    int maxx = 0;
    int count  = 1;

    for(int i = 0; i < n - 1 ; i++){
        if(arr[i + 1] > arr[i]){
            count++;
        }else{
            maxx = max(maxx, count);
            count = 1;
        }
    }

    maxx = max(maxx, count);

    cout<<maxx<<endl;

    return 0;
}