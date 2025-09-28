#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll rcount = 0, ucount = 0;
    ll ans = 0;

    for(int i = 0; i < n-1; i++){

        if(s[i] == 'U'){
            ucount++;
        }else{
            rcount++;
        }

        if(ucount == rcount && s[i] == s[i + 1]){
            ans++;
        }
        
    }
    cout<<ans<<"\n";
    return 0;
}