#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<string> s(n);

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    int count = 0;

    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1 ; j++){
            if(s[i][j] == '.'&& s[i][j+1] == '.' && s[i][j-1] == '.' && s[i+1][j] == '.'&&s[i-1][j] == '.'){
                s[i][j] = '#';
                s[i][j + 1] = '#';
                s[i][j - 1] = '#';
                s[i+1][j] = '#';
                s[i-1][j] = '#';
            }    

        }
    }

    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(s[i][j] == '.'){
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}