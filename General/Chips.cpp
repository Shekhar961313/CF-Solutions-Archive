#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    
    int i = 1;
    while(m){
        if(i > n){
            i = 1;
        }
        if(m >= i){
            m -= i;
        }else{
            break;            
        }
        i++;
    }
    cout<<m;

    return 0;
}