#include <iostream>
void tabellina (int N){
    for (int i = 0; i < 11; ++i) {
        std::cout << N*i << " ";
    }
}
int main() {
    int N;
    std::cout << "Inserire il numero N: ";
    std::cin >> N;
    tabellina(N);
    return 0;
}
