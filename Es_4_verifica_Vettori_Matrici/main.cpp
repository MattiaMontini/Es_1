#include <iostream>
const int N = 3;
bool simmetrica (int m[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j] != m[j][i])
                return false;
        }
    }
    return true;
}



int main() {
            int M[N][N]{
                    1, 2, 3,
                    2, 3, 7,
                    3, 7, 4,
            };
            std::cout << simmetrica(M);
                return 0;
            }

