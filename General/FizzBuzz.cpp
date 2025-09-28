#include<iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    for (int k = 0; k < t; k++) {
        cin>>n;
        int count = 0; 
        for(int i = 0; i<=n; i++){
            if(i%3 == i%5){
                count++;

            }
        }
        cout<<count<<endl;
    }

    return 0;
}