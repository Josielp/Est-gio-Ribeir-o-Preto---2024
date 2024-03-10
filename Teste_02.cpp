#include <iostream>
using namespace std;

bool isFibonacci(int num) {
    int a = 0;
    int b = 1;
    int c = a + b;

    while (c <= num) {
        if (c == num) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }

    return false;
}

int main() {
    int num;
    cout << "Informe um número: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << "O número " << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << num << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
