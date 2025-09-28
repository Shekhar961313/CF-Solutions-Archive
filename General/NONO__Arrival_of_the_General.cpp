#include<bits/stdc++.h> // code is wrong , do again !!!!!
using namespace std;

int main(){

    int n ;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int minn = arr[0];
    int maxx = arr[0];
    for(int i = 0; i < n ; i++){
        if(arr[i] < minn){
            minn = arr[i];
        }
        if(arr[i] < maxx){
            maxx = arr[i];
        }
    }

    auto inmin = find(arr.begin(), arr.end(), minn);
    auto inmax = find(arr.begin(), arr.end(), maxx);

    if(inmin < inmax){
        cout<<(inmax - arr.begin()) + (n-1-(inmin - arr.begin()) - 1);
    }
    else{
        cout<<(inmin - arr.begin()) + (n-(inmax - arr.begin())-1);
    }
    return 0;
}