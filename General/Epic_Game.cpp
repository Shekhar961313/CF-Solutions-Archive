#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b) {
    if (b == 0){
        return a;
    }
    return hcf(b, a % b);
}

int main(){

    int a,b,n;
    cin>>a>>b>>n;
    
    while(n != 0){
        int diff = hcf(a, n);
        if(diff < n){
            n = n - diff;
        }else{
            cout<<0;
            break;
        }

        int fiff = hcf(b, n);
        if(fiff < n){
            n = n - fiff;
        }else{
            cout<<1;
            break;
        }
    }
    return 0;
}