#include <iostream>
#include <stack>
using namespace std;
// Pilha/Stack
int main()
{
    stack <string> cartas;
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    cout << "Tamanho da pilha:  " << cartas.size() << "\n";
    cout << "Carta do topo: " << cartas.top();
    //cartas.pop();
    //cout << "Tamanho da pilha:  " << cartas.size() << "\n";

    return 0;
}