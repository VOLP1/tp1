#include "domains.h"
using namespace std; 
// Métodos de Code()
void Code::validate(value){
    if (value.length() != LENGTH) {
        throw invalid_argument("Argumento Inválido");
    }
     if (isupper(value[0]) && isupper(value[1])) {
        // Verifica se as duas últimas posições contêm números
        if (isdigit(value[2]) && isdigit(value[3])) {
            return true; // A string atende aos critérios
        }
    }

    return false; // A string não atende aos critérios
}


void Code::setValue(string value) {
    validate(value);
    this->value = value;
}
