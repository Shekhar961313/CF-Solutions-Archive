#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
      
        int ev = 0;
        int od = 0;

        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0){
                ev++;
            }else{
                od++;
            }
        }
        int count = 0;
        int yo;
        if(n % 2 == 0){
            yo = n/2;
        }else{
            yo = (n/2)+1;
        }    
        if(ev == yo){
            for(int i = 0; i<n; i++){
                if((i % 2 == 0) && (arr[i] % 2 != 0)){
                    count++;
                }
            }
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;;
        }
    }
    return 0;
}