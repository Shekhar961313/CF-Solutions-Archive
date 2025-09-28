#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin>>n;
    map<int,int> arr;

    for(int i = 0 ; i< n; i++){
        int val;
        cin>>val;
        arr[val] = i;
    }
    
    for(auto inn : arr){
        cout<< inn.second + 1<<" ";
    }
    return 0;
}

