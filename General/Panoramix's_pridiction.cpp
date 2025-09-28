#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    bool ans = true;
    int yo;
    for(int i = n+1; i < 51 ; i++){
        for(int j = 2; j < i; j++){
            if(i % j != 0){
                ans = true;
            }else{
                ans = false;
                break;
            }
        }
        if(ans == true){
            yo = i;
            break;
        }
    }
    if(yo == m){
        cout<<"YES";

    }else{
        cout<<"NO";
    }
    return 0;
}