#include <iostream>
using namespace std;
// Arrays bidimensionais / Matrizes

int main(){

    int l, c;
    int array[3][3];

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cout << "Digite um valor para a Linha: " << l+1 << " e Coluna: " << c+1 << ": ";
            cin >> array[l][c];
            cout << "\n";

        }   
    }

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cout << " | "<< array[l][c] << " | ";   
        }
        cout << "\n";
        cout << "---------------------";
        cout << "\n";
    }

    return 0;
}