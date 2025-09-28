#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    int sum = 0;
    for(int i=0 ; i<n; i++){
        for( int j = 0 ; j < n ;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<n; i++){
        for( int j = 0 ; j < n ;j++){
            if(i == j){
                sum = sum + arr[i][j];
            }
            if(j == n-i-1){
                sum += arr[i][j];
            }
            if(i == n/2 || j == n/2){
                sum += arr[i][j];
            }
        }
    }
    cout<<sum - 2*(arr[n/2][n/2]);
}