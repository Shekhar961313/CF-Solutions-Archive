#include<iostream>
using namespace std;

int main(){
    int t;
    int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int sum = 0;
        while(n){
            sum = sum + (n % 10);
            n = n/10;
        }
        cout<<sum<<endl;
    }
    
}