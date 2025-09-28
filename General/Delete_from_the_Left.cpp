#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;

    int count = 0;
    int n = max(s.size(), t.size());

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    for(int i = 0; i < n ;i++){
        if(s[i] == t[i]){
            count++;
        }else{
            break;
        }

    }

    int ans = (s.size() + t.size()) - 2*count;

    cout<<ans;

    return 0;
}