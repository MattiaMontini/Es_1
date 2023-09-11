#include <iostream>

int main() {
    std::string s = "ciao come va ";
    while (s.find(" ") != std::string::npos) {
        s.erase(s.find(" "), 1);
    }
    std::cout << s;
    return 0;
}
