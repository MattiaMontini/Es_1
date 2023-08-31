#include <iostream>
bool Primi(int a, int b){
    int temp = a;
    if (a < b){
        a = b;
        b = temp;
    }
    for (int i = 2; i <= a; ++i) {
        if (a%i == 0 && b%i == 0)
            return false;
    }
    return true;
}
int main() {
    int a, b;
    std::cout << "Inserisci i numeri: " << std::endl;
    std::cin >> a >> b;
    if (Primi(a, b))
        std::cout << "I numeri sono primi" << std::endl;
    else
        std::cout << " I numeri non sono primi" << std::endl;
    return 0;
}
