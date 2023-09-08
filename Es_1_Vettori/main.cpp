#include <iostream>
int differenza (int v[], int N){
    int maggiore = v[0], minore = v[0];
    for (int i = 0; i < N; ++i) {
        if (v[i] > maggiore)
            maggiore = v[i];
        if(v[i] < minore)
            minore = v[i];
    }
    return maggiore-minore;
}
int main() {
    const int MAX = 30;
    int V[MAX];
    for (int i = 0; i < MAX; ++i) {
        V[i] = i +2;
    }
    std::cout << differenza(V, MAX);


    return 0;
}
