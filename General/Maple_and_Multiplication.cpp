#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        int minn = min(a,b);
        int maxx = max(a,b);
        if(minn == maxx){
            cout<<0<<"\n";
        }
        else if(minn == 1){
            cout<<1<<"\n";
        }else{

            if(maxx % minn == 0){
                cout<<1<<"\n";
            }else{
                cout<<2<<"\n";
            }
        }

    }
}
