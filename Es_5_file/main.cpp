#include <iostream>
#include <fstream>
int main() {
    std::ofstream out ("../dati.txt");
    if (!out){
        return 1;
    }
    out << "1 2.30 15" << std::endl;
    out << "2 1.45 0" << std::endl;
    out << "2 3.20 10" << std::endl;
    out.close();
    std::ifstream in ("../dati.txt");
    if (!in){
        return 1;
    }
    std::string s;
    float totale = 0;
    int quantita, sconto;
    float prezzo;
    while (std::getline(in, s)){
        quantita = std::stoi(s.substr(0, s.find(" ")));
        s.erase(0,s.find(" ")+1);
        prezzo = std::stof(s.substr(0, s.find(" ")));
        s.erase(0,s.find(" ")+1);
        sconto = std::stoi(s.substr(0));
        totale += (quantita*prezzo)-(sconto*((quantita*prezzo)/100));
    }
    std::cout << "Il totale risulta " << totale;
    return 0;
}
