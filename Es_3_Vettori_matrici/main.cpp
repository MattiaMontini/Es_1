#include <iostream>

int main() {
    srand(time(NULL));
    int MAX = 1000;
    int v[MAX];
    for (int i = 0; i < MAX; ++i) {
        v[i] = rand() % 1000 - 570;
    }
    int conta = 0;
    for (int i = 0; i < MAX +1; ++i) {
        if (v[i] >= 0){
            conta ++;
        }
        else if (v[i] < 0 || i == MAX){
            if (conta >= 3){
                for (int j = i-conta; j < i ; ++j) {
                    std::cout << v[j] << " ";
                }
                std::cout << std::endl;
            }
            conta = 0;
        }
    }
    return 0;
}
