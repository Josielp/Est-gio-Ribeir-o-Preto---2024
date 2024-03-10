#include <iostream>

using namespace std;

int main() {
    bool lamp1 = false;
    bool lamp2 = false;
    bool lamp3 = false;

    cout << "Escolha um interruptor para ligar: ";
    int switch1;
    cin >> switch1;

    // Ligar o interruptor escolhido
    if (switch1 == 1) {
        lamp1 = !lamp1;
    } else if (switch1 == 2) {
        lamp2 = !lamp2;
    } else if (switch1 == 3) {
        lamp3 = !lamp3;
      
    }
    cout << "O primeiro interuptor é referente a primeira lampadas ligada: \n";
    cout << "Escolha outro interruptor para ligar: ";
    int switch2;
    cin >> switch2;

    // Ligar o interruptor escolhido
    if (switch2 == 1) {
        lamp1 = !lamp1;
    } else if (switch2 == 2) {
        lamp2 = !lamp2;
    } else if (switch2 == 3) {
        lamp3 = !lamp3;
     
    }
    cout << "O segundo interuptor é referente a segunda lampadas ligada: \n\n";
    cout << "A lâmpada 1 está " << (lamp1 ? "ligada" : "desligada é o terceiro interuptor ") << endl;
    cout << "A lâmpada 2 está " << (lamp2 ? "ligada" :  "desligada é o terceiro interuptor") << endl;
    cout << "A lâmpada 3 está " << (lamp3 ? "ligada" : "desligada é o terceiro interuptor") << endl;

    return 0;
}

/*Explicação:
- O código começa definindo três variáveis booleanas `lamp1`, `lamp2` e `lamp3` para representar o estado das lâmpadas.
- Em seguida, o programa solicita ao usuário que escolha um interruptor para ligar e armazena a escolha na variável `switch1`.
- Dependendo do*/