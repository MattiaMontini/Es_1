#include <iostream>
struct Data{
    int giorno;
    int mese;
    int anno;
};
struct Conto_corrente{
    int numero_conto;
    Data data;
    float saldo;
};
float media (Conto_corrente v[], int N, Data data){
    int conta = 0;
    float Media = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i].data.giorno == data.giorno && v[i].data.mese == data.mese && v[i].data.anno == data.anno){
            conta++;
            Media += v[i].saldo;
        }
    }
    Media = Media /conta;
    return Media;
}
int main() {
    Conto_corrente v[3];
    for (int i = 0; i < 3; ++i) {
        v[i].saldo = 1000+0.5;
        v[i].data.giorno = 10;
        v[i].data.mese = 11;
        v[i].data.anno= 2;
        v[i].numero_conto = i+1;
    }
    Data data {10,11,12};
    std::cout << media(v, 3, data);
    return 0;
}
