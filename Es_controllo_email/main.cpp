#include <iostream>
bool chiocciola (std::string s){
    int conta = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == '@')
            conta ++;
    }
    if (conta == 1)
        return true;
    else
        return false;
}
bool valido (std::string s){
    if (chiocciola(s))
        if (s.at(0) >= 'a' && s.at(0) <= 'z' || s.at(0) >= 'A' && s.at(0) <= 'Z')
            if(s.find('.') > s.find('@') + 1 && s.find('.') != s.size())
                if (s.substr(s.find('.' ) + 1, s.size()).size() == 2 || s.substr(s.find('.') + 1, s.size()).size() == 3)
                    return true;
    return false;
}

int main() {
    std::string email;
    std::cout << "inserisci l'email: " << std::endl;
    std::cin >> email;
    if (valido(email))
        std::cout << "l'indirizzo email inserito è valido." << std::endl;
    else
        std::cout << "l'indirizzo email inserito non è valido." << std::endl;
    return 0;
}
