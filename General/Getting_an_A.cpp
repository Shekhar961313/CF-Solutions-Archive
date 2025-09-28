#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    int sum = 0;
 
    for(int i = 0; i < n; i++){
        cin >> grades[i];
        sum += grades[i];
    }
 
    int target = ceil(4.5 * n);
 
    sort(grades.begin(), grades.end());
 
    int redo_count = 0;
    int i = 0;
 
    while(sum < target){
        sum += 5 - grades[i]; 
        redo_count++;
        i++;
    }
 
    cout << redo_count << endl;
    return 0;
}  