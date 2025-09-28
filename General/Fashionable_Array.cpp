#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int maxi;
        int mini;
        for(int i = 0; i< n ; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        maxi = arr[n - 1];
        mini = arr[i];
    }
}