#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<char>> matrix(n, vector<char>(m));

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(matrix[i][j] == 'B' || matrix[i][j] == 'W' || matrix[i][j] == 'V'){
                continue;
            }else{
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}