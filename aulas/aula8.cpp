#include <iostream>
using namespace std;
// GO TO
int main(){

    int n1,n2,n3,res;
    char opc;

    inicio:

    cout << "\nDigite o valor da primeira nota: ";
    cin >> n1;
    cout << "\nDigite o valor da segunda nota: ";
    cin >> n2;
    res = n1+n2;

    if(res >= 60){
        cout << "\n\nAprovado!\n\n";

    } else if(res >= 40) {
        cout << "\n\nAluno de recuperacao\n\n";

    } else {
        cout << "\n\nAluno reprovado\n\n";

    }

    cout << "\n\nDigitar outras notas? [S/N]  ";
    cin >> opc;

    if (opc == 's' or opc == 'S'){
        system("cls");
        goto inicio;
    }

    return 0;
}