#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int co1 = a/1;
    int co2 = b/2;
    int co3 = c/4;

    int minn = min(min(co1, co2), co3);

    if(co1 != 0 && co2 != 0 && co3 != 0){
        cout<<minn + (minn*2) + (minn*4)<<endl;
    }else{
        cout<<0;
    }
    return 0;

}
