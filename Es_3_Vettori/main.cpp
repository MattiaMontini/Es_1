#include <iostream>

int main() {
    const int MAX = 100;
    int v[MAX];
    srand(time(NULL));
    for (int i = 0; i < MAX; ++i) {
        v[i] = rand() % 1000;
    }
    int conta = 0;
    for (int i = 0; i < MAX-1; ++i) {
        if (v[i] == v[i+1])
            conta ++;
        else
            conta = 0;
    }
    std::cout << conta;
    return 0;
}
