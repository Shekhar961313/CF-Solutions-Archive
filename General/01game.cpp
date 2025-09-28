#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        int p  = s.size();
        int co1 = 0;
        int co2 = 0;
        for(int i = 0; i < p; i++){
            if(s[i] == '1'){
                co1++;
            }else{
                co2++;
            }
        }
        int maxx = min(co1, co2);
        if(maxx % 2 == 0){
            cout<<"NET"<<endl;
        }else{
            cout<<"DA"<<endl;
        }
    }
}