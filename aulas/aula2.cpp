#include <iostream>
using namespace std;

int main(){

    int vidas = 100;
    char letra = 'H';
    double decimal = 2.4848446582; // 2.99999999
    float decimal2 = 2.4848446582; // 2.5
    bool vivo = true;
    string frase = "Uma frase qualquer";

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Digite a quantidade de dinheiro: ";
    cin >> decimal;
    cout << "Digite uma frase: ";
    cin >> frase;


    cout << vidas    << "\n";
    cout << letra    << "\n";
    cout << decimal  << "\n";
    cout << decimal2 << "\n";
    cout << vivo     << "\n";
    cout << frase    << "\n";

    return 0;
}