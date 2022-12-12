#include <iostream>
using namespace std;
//Operador ternario

int main(){

    //(expressão) ?(se) (true)valor1 (senão): (false)valor2

    int n1,n2,nota;
    string res;

    cout << "\nDigite a primeira nota: ";
    cin >> n1;
    cout << "\nDigite a segunda nota: ";
    cin >> n2;
    nota = n1+n2;

    /*(nota >= 60) ? res="Aluno aprovado!" : res="Aluno reprovado!";

    cout << "\n\n" << res << "\n\n";*/

    res = (nota >= 60) ? "\nAluno aprovado\n\n" : "\nAluno reprovado\n\n";
    cout << res;

    return 0;
}