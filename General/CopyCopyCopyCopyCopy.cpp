#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        
        set<int>result;

        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            result.insert(x);
        }
        
        cout<<result.size()<<endl;
    }

    return 0;
}