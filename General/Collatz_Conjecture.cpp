#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        
        int i = 0;
        int ans = x;

        while(i<k){
            ans = ans * 2;
            i++;
        }

        cout<<ans<<endl;
    }
    
}