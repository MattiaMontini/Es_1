#include <iostream>
#include <cmath>
int converti (std::string codice){
    int c = 0;
    std::string convertita;
    for (int i = 0; i < codice.size(); ++i) {
        c += pow(2, i) * std::stoi(codice.substr(i, 1));
    }
    return c;
}
int main() {
    std::string codice = "0101010";
    std::cout << converti(codice);
    return 0;
}
