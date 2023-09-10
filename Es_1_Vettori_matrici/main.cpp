#include <iostream>
int elementi (int v[], int N, int Max, int Min){
    int conta = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i] < Max && v[i] > Min)
            conta ++;
    }
    return conta;
}
int main() {
    int MAX = 10;
    int v[MAX];
    int Max = 7, Min = 2;
    for (int i = 0; i < 11; ++i) {
        v[i] = i;
    }
    std::cout << elementi(v, MAX, Max, Min);
    return 0;
}
