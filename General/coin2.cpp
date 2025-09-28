#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2 == 0){
            cout<<"YES"<<endl;
            continue;

        }
        if(k % 2 == 0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}