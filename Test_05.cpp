#include <iostream>
#include <string>

using namespace std;

string contrStrg(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string input;
    cout << "Digite uma uma frase: ";
    cin >> input;

    string reversed = contrStrg(input);
    cout << "frase invertida: " << reversed << endl;

    return 0;
}
