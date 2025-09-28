#include<iostream>
using namespace std;
#define Max 501

int main(){
    char s[Max+1];
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        if(s[0] != s[n-1]){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
