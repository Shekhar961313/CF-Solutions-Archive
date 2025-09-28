#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string n;
        cin>>n;

        if(n.size() > 10){

        char a = n[0];
        char b = n[n.size()-1];
        string c = to_string(n.size()-2);
        string d = a + c + b;

        cout<<d<<endl;

        }else{
            cout<<n<<endl;
        }
    }

    return 0;
}