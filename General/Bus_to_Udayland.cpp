#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i < n ; i++){
        cin>>s[i];
    }

    bool flag = false;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < 5 ; j += 3){
            if(s[i][j] == 'O' && s[i][j + 1] == 'O'){
                s[i][j] = '+';
                s[i][j + 1] = '+';
                flag = true;
                break;
            } 
        }
        if(flag == true){
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    if(flag){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<s[i][j];
        }
    cout<<endl;
    }
    }
}

