#include <iostream>

int main() {
    const int N = 50;
    int v[N];
    int elementi;
    std::cout << "Inserisci quanti valori vuoi all'interno del vettore: " << std::endl;
    std::cin >> elementi;
    std::cout << "Inserisci i valori nel vettore: " << std::endl;
    for (int i = 0; i < elementi; ++i) {
        std::cin >> v[i];
    }
    int j = elementi -1;
    for (int i = 0; i < elementi/2; ++i) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        j--;
    }
    for (int i = 0; i < elementi; ++i) {
        std::cout << v[i] << " ";
    }
    return 0;
}
