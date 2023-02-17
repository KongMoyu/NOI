STATEMENT:

#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    long long secondary_total = 0, junior_total = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        secondary_total += x;
        junior_total += y;
    }
    
    std::cout << secondary_total << " " << junior_total << "\n";
    
    return 0;
}
