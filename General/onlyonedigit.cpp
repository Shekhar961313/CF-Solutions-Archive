#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int ans;
        int min = 9;
        cin>>n;
        while(n > 0){
            ans = n%10;
            if(min > ans){
                min = ans;
            }
            n = n / 10;
        }
        cout<<min<<endl;;
    }
}