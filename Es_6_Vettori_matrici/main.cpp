#include <iostream>
std::string rimuovi (std::string S1, std::string S2){
    while (S1.find(S2) != std::string::npos){
        S1.erase(S1.find(S2), S2.size());
    }
    return S1;
}
int main() {
    std::string S1, S2;
    std::cout << "Inserisci due stringhe" << std::endl;
    std::getline(std::cin,S1);
    std::getline(std::cin,S2);
    std::cout << rimuovi (S1, S2);
    return 0;
}
