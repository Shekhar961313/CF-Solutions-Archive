#include<bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin>>n;

    int count7 = 0;
    int count4 = 0;
    for(auto st : n){
        if(st == '7'){
            count7 ++;
        }
        else if(st == '4'){
            count4 ++;
        }
    }
    if(count4 + count7 == 4 || count4 + count7 == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;

}