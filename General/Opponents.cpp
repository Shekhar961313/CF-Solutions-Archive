#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int d;
    cin>>n>>d;

    vector<string> arr(d);
    for(int i = 0; i < d ; i++){
        cin>>arr[i];
    }

    int count = 0;
    int maxx = 0;
    bool flag = false;
    for(int i = 0; i < d ; i++){
        flag = false;
        for(int j = 0; j < n; j++){
            if(arr[i][j] != '0'){
                continue;
            }else{
                flag = true;
            }
        }
        if(flag){
            count++;
        }else{
            maxx = max(maxx, count);
            count = 0;
        }
    }

    maxx = max(maxx, count);

    cout<<maxx<<endl;

    return 0;
}