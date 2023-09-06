#include <iostream>
struct Tutor{
    std::string nome;
    std::string cognome;
    int anno;
    std::string materia;
};
struct Classe{
    int anno;
    std::string sezione;
    int N_alunni;
    Tutor tutor;
};
int main() {
    Classe classe;
    return 0;
}
