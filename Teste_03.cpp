#include <iostream>
#include <cmath>
using namespace std;


int main() {
  
    cout << "a)Sequência de números impares\n\n";
    for (int i = 1; i <= 9; i += 2) {
        cout << i << endl;
    }

    cout << "\nb) Sequência baseada na multiplicação por 2 (2x2=4; 4x2=8; 8x2=16... 64x \n\n";

    int num = 2;
    while (num <= 128) {
        cout << num << endl;
        num = 2 * num;
    }

    cout << "\nc) Sequência baseada na soma em uma outra sequência de números ímpares (+1, +3...\n\n";
    
    for (int i = -2; i < 8; i++) {
      int nextNumber = pow(i + 2, 2);
      cout << nextNumber << " ";
    }
      cout << endl;
  

    cout << "\nd) Sequência de uma somatoria de numeros impares aos numeros da multiplicação, 4x1 = 4, (1+3=4) recebe o próximo número que é multiplicado 4x4 = 16,(4+5=9) 4x9 = 36 (7+9=16) 4x16=64 (9+16=25) 4x25 = 100 \n\n";

    int s = 0;
    int nm = 1;

    for (int i = 0; i < 5; i++) {
        s += nm;
        nm += 2;
    }
   
    int result = 4 * s;

    cout << result << endl;

    cout << "\ne) Sequência baseada na soma dos dois elementos anteriores: 1 (primeiro elemento), 1 (segundo elemento), 1+1=2, 1+2\n";

    int num1 = 1;
    int num2 = 1;
    cout << num1 << endl;
    cout << num2 << endl;
    for (int i = 0; i < 5; i++) {
        int sum = num1 + num2;
        cout << sum << endl;
        num1 = num2;
        num2 = sum;
    }

    cout << "\nf) f) Sequência numérica baseada em um elemento não numérico, a letra inicial do número escrito por extenso: dois, dez, doze, dezesseis, dezessete, dezoito, dezenove, duzentos..\n\n";

    string numb[] = {"2", "10", "12", "16", "18", "19", "200"};
    for (int i = 0; i < 8; i++) {
        cout << numb[i] << endl;
    }
  
    return 0;
}
