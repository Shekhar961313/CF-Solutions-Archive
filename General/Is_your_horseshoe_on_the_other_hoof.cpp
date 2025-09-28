#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    set<int> uniqueShoes;
    uniqueShoes.insert(a);
    uniqueShoes.insert(b);
    uniqueShoes.insert(c);
    uniqueShoes.insert(d);


    return 4 - uniqueShoes.size();

}
