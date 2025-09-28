#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int current_time = 0;
    int button_active_until = -1; 

    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) { 
            if (button_active_until == -1) { 
                
                button_active_until = current_time + x;
            } else { 
                if (current_time >= button_active_until) {
                    std::cout << "NO" << std::endl;
                    return;
                }
            }
        }
 
        current_time++;
    }

    
    std::cout << "YES" << std::endl;
}

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}