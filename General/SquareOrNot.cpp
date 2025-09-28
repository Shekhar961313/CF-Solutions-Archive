#include<iostream>
#include<cmath>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false;
    int root = static_cast<int>(sqrt(num));
    return (root * root == num);
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n+1];
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        s[n] = '\0';
        int counto = 0;
        int countI = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='0'){
                counto += 1;
            }
            else
                countI += 1;
        }
        if(((countI%2) == 0 ) && isPerfectSquare(counto)&& isPerfectSquare(countI)){
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
        
    }
}