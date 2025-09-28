#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int sum1 = 0;
        int sum2 = 0;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        for(int i = 1; i<=n; i++){
            if(i%2 == 0){
                sum2 += a[i-1];
            }
            else
                sum1+=a[i-1];

        }
        cout<<sum1-sum2<<endl;
    }  
}