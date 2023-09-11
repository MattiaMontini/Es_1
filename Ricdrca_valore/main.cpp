#include <iostream>
bool ricerca (int v[], int cercato, int n){
    for (int i = 0; i < n; ++i) {
        if (v[i] == cercato)
            return true;
    }
    return false;
}
int main() {
    int N = 10;
    int v[N], cercato;
    std::cout << "Inserisci valori nel vettore: " << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> v[i];
    }
    std::cout << "Inserisci il valore da cercare: " << std::endl;
    std::cin >> cercato;
    if (ricerca(v, cercato, N))
        std::cout << "Il valore è presente nel vettore.";
    else
        std::cout << "Il valore non è presente nel vettore.";
    return 0;
}
