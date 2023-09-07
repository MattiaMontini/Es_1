#include <iostream>
struct Razionale{
    int numeratore;
    int denominatore;
};
Razionale somma_razionali(Razionale a, Razionale b){
    Razionale somma;
    if (a.denominatore % b.denominatore == 0 || b.denominatore % a.denominatore == 0){
        if (a.denominatore > b.denominatore) {
            somma.denominatore = a.denominatore;
            somma.numeratore = a.numeratore + ((a.denominatore / b.denominatore) * b.numeratore);
        }else{
            somma.denominatore = b.denominatore;
            somma.numeratore = b.numeratore + ((b.denominatore/a.denominatore) * a.numeratore);
        }
    }else{
        somma.denominatore = a.denominatore * b.denominatore;
        somma.numeratore = ((somma.denominatore/a.denominatore) * a.numeratore) + ((somma.denominatore/b.denominatore) * b.numeratore);
    }
    if (somma.denominatore > somma.numeratore) {
        for (int i = 0; i < somma.denominatore/2; ++i) {
            if (somma.numeratore%i == 0 && somma.denominatore%i == 0){
                somma.denominatore = somma.denominatore/i;
                somma.numeratore = somma.numeratore/i;
            }
        }
    }else {
        for (int i = 0; i < somma.numeratore/2; ++i) {
            if (somma.numeratore%i == 0 && somma.denominatore%i == 0){
                somma.denominatore = somma.denominatore/i;
                somma.numeratore = somma.numeratore/i;
            }
        }
    }
    return somma;
}
int main() {
    Razionale a,b;
    std::cout << "inserire due frazioni:" << std::endl;
    std::cin >> a.numeratore >> a.denominatore;
    std::cin >> b.numeratore >> b.denominatore;
    std::cout << somma_razionali(a,b).numeratore << "/" << somma_razionali(a,b).denominatore;
    return 0;
}
