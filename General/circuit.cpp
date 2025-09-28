#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[2*n];
        int count = 0;
        for(int i = 0;i<2*n; i++){
            cin>>a[i];
            if(a[i]==1){
                count++;
            }
        }
        int max_on = min(count, 2*n - count);
        cout<<count%2<<" "<<max_on<<endl;
        
    }
}
