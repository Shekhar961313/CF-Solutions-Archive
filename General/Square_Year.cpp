#include<iostream>
#include<cmath>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int a = 0;
        int b;
        int n;
        cin>>n;
        
        if(sqrt(n) * sqrt(n) == n){
            cout << 0 << ' ' << sqrt(n) << "\n";
        }else{
            cout<<"-1"<<endl;
        }
        
    }
}