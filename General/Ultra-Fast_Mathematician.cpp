#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    string c;

    cin>>a>>b;

    for(int i = 0; i<a.size(); i++){
        if(a[i] == b[i]){
            c += to_string(0);
        }else{
            c += to_string(1);
        }
    }
    cout<<c;
}