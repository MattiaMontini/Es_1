#include <iostream>
#include <cmath>

const float g = 9.81;
float lunghezza_pendolo(float p){
    return (pow(p/6.2832, 2.0))*g;
}
bool corretto(float p, float lunghezza){
    if(p=6.2832 * sqrt(lunghezza/g))
        return true;
    else
        return false;
}
int main() {
    float periodo;
    float lunghezza;
    std::cout << "Inserisci il periodo del pendolo: " << std::endl;
    std::cin >> periodo;
    lunghezza = lunghezza_pendolo(periodo);
    std::cout << "La lunghezza del pendolo risulta: " << lunghezza << std::endl;
    if (corretto(periodo, lunghezza))
        std::cout << "corretto";
    else
        std::cout << "errato";
    return 0;
}
