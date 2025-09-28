#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;
    cin>>a>>b;
    
    int ans = 0;
    for(int i = 0; i < a.size() ; i++){
        if(tolower(a[i]) == tolower(b[i])){
            ans = 0;
        }else if(tolower(a[i]) > tolower(b[i])){
            ans = 1;
            break;
        }else{
            ans = -1;
            break;
        }
    }
    cout<<ans;
    return 0;
}