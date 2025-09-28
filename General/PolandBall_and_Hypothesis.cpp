#include<bits/stdc++.h>
using namespace std;

int main(){
    int m ;
    cin>>m;

    if(m == 1){
        cout<<3<<endl;
    }else if( m == 2){
        cout<<4<<endl;
    }
    else if(m % 2== 0){
        cout<<m-2<<endl;
    }else{
        cout<<1<<endl;
    }
}
