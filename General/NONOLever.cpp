#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i = 0 ; i <n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i <n ; i++){
            cin>>b[i];
        }
        bool a1 = true;
        bool a2 = true;
        int count = 0;
        int i = 1;
        while(a1 == true && a2 == true){
            if(i>n){
                i = 1;
            }
            if(a[i-1] > b[i-1]){
                a[i-1] -= 1;
            }else{
                a1 = false;
            }
            count++;
            i++;
            
        }
        cout<<count<<endl;
    }
}