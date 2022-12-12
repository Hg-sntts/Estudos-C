#include <iostream>
using namespace std;
//while

int main(){

    int n;
    int cont;
    string resp;

    while(true){
        cout << "Tabuada de: ";
        cin >> n;
        cont = 0;
        while(++cont < 11){
            cout << n << " x " << cont << " =  " << cont*n << "\n";
        }
        cout << "Deseja continuar? [S/N] ";
        cin >> resp;
        if(resp != "s" && resp != "S"){
            system("cls");
            break;
        }
    }

    return 0;
}