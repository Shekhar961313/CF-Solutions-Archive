#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int n,m;
    while(t--){
        int count = 0;
        cin>>n>>m;
        vector<vector<char>> vec(n, vector<char>(m));
        for(int i = 0; i<n; i++){
            for(int j = 0; j < m ;j++){
                cin>>vec[i][j];
            }
        }
        for(int i = 0; i<n ; i++){
            if(vec[i][m-1] != 'D'){
                count++;
            }
        }
        
        for(int i = 0; i<m ; i++){
            if(vec[n-1][i] != 'R'){
                count++;
            }
        }
        cout<<count-2<<endl;
        
    }
    return 0;
}