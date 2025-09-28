#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
      
        for(int i = 0; i< n ; i++){
            cin>>arr[i];
        }
         int count = 0;
        int last = -1;  
        
        for (int i = 0; i < n; ++i) {
            if (arr[i] > last + 1) {
                count++;
                last = arr[i];
            }
        }
        
        cout << count << '\n';
    }
}
