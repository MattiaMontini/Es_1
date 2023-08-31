#include <iostream>
#include <cmath>

void terne(int n){
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < n; ++j) {
            for (int k = 1; k < n; ++k) {
                if (pow(i, 2) + pow(j, 2) == pow(k, 2)){
                    std::cout << i << " " << j << " " << k << std::endl;
                }
            }
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    terne(n);
    return 0;
}
