#include <iostream>
int Medino(int a, int b, int c){
    int maggiore;
    if (a > b){
        if (a > c)
            maggiore = a;
        else
            maggiore = c;
    }else{
        if(b > c)
            maggiore = b;
        else
            maggiore = c;
    }
    if (maggiore == a){
        if (b > c)
            return b;
        else
            return c;
    }
    else if (maggiore == b){
        if (a > c)
            return a;
        else
            return c;
    }
    else{
        if (a > b)
            return a;
        else
            return b;
    }


}
int main() {
    int a, b, c;
    std::cout << "Inserisci tre numeri: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "Il valore mediano è: " << Medino(a,b,c);

    return 0;
}
