#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int n,h;
    cin>>n>>h;

    int ans = 0;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] <= h){
            ans += 1;
        }else{
            ans += 2;
        }

    }

    cout<<ans;


    return 0;
}
    
