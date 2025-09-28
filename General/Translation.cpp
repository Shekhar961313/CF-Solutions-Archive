#include<bits/stdc++.h>
using namespace std;

int main(){

    string n;
    string m;

    cin>>m>>n;
    bool flag = true;

    if(n.size() == m.size()){

        for(int i = 0; i < n.size() ; i++){
            if(n[i] == m[m.size()-1-i]){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        cout<<"NO";
    }
     
}