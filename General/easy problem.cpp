#include <iostream>
using namespace std;

int main()
{
    int n;
    int t;
    cin>>t;
    for(int k = 0; k<3; k++){
    cin >> n;
    
        int count = 0;
        for(int i = 1; i <= n - 1; i++) {
            for(int j = 1; j <= n - 1; j++) {
                if(i == n - j) {
                    count++;
                }
            }
        }
        cout << count;
    }
    return 0;
}
