#include<bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin>>n;
    int countupper = 0 ;
    int countlower = 0;

    for(int i = 0; i < n.size(); i++){
        if(isupper(n[i])){
            countupper ++;
        }else if(islower(n[i])){
            countlower ++;
        }
    }
    if(countlower > countupper || countlower == countupper ){
        for(char &st : n){
            st = tolower(st);
        }
        cout<<n<<endl;
    }else if(countlower < countupper){
        for(char &st : n){
            st = toupper(st);
        }
        cout<<n<<endl;
    }
    return 0;

}