#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<pair<int, int>>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int diff = 0;
    int maxx = 0;
    for(auto in : arr){
        diff = diff - in.first;
        diff = diff + in.second;
        if(diff > maxx){
            maxx = diff;
        }
    }
    cout<<maxx;

    return 0;
}