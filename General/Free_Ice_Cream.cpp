#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

    ll n;
    ll x;

    cin>>n;
    cin>>x;

    vector<pair<char, int>> arr(n);
    for(int i = 0 ; i<n; i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }

    int cdis = 0;

    for(int i = 0; i < n; i++){
        if(arr[i].first == '-' && arr[i].second > x){
            cdis++;
        }else if(arr[i].first == '-' && arr[i].second <= x){
            x = x - arr[i].second;
        }else{
            x += arr[i].second;
        }
    }

    cout<<x<<" "<<cdis<<endl;

    return 0;
}