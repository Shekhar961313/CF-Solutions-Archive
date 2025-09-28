#include<iostream>
using namespace std;

int main(){
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a >= 102 && a<= 109){
            cout<<"yes"<<endl;
            continue;
        }
        
        if(a>=1010 && a<=1099){
            cout<<"yes"<<endl;
            continue;
        }
        cout<<"no"<<endl;
    }
}