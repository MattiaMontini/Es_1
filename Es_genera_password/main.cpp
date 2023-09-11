#include <iostream>
char genera_carattere(){
    char c = rand() % 125 +70;
    return c;
}
std::string genera_password (int lunghezza){
    std::string password;
    for (int i = 0; i < lunghezza; ++i) {
        password += genera_carattere();
    }
    return password;
}
int main() {
    int l;
    std::cout << "Indicare la lunghezza della password:" ;
    std::cin >> l;
    std::cout << genera_password(l);
    return 0;
}