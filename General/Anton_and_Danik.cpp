#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cA = 0;
    int cD = 0;

    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'A'){
            cA++;
        }else{
            cD++;
        }
    }
    if(cA > cD){
        cout<<"Anton";

    }else if(cA == cD){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }

    return 0;
}