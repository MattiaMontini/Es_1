#include <iostream>

int main() {
    std::string s = "CIAO. COME va ?";
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z' || s.at(i) >= 'a' && s.at(i) <= 'z')
            s.at(i) = tolower(s.at(i));
        else{
            s.erase(i, 1);
            i--;
        }
    }
    std::cout << s;
    return 0;
}
