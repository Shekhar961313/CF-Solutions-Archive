#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int ans = n - 10;
    if(ans >= 2 && ans <= 9){
        cout<<4;
    }else if( ans == 10){
        cout<<15;
    }else if(ans == 0){
        cout<<0;
    }else{
        cout<<4;
    }
    return 0;

}