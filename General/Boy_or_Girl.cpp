#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    
    set<int> hello;
    for(auto i : n){
        hello.insert(i);
    }
    
    if(hello.size() % 2 == 0){
        cout<<"CHAT WITH HER!";

    }else{
        cout<<"IGNORE HIM!";
    }
}