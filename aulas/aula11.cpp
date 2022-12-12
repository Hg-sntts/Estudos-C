#include <iostream>
using namespace std;
//Switch case

/*
    switch(){
        case: 1:
            break;
        case 2:
            break;
        default:
            break;
    }
*/

int main(){

    int valor;

    cout << "Selecione um veiculo: \n\n";
    cout << "[1] Carro\n";
    cout << "[2] Moto\n";
    cout << "[3] Barco\n";
    cout << "[4] Lancha\n\n";
    cin >> valor;

    switch (valor){
    case 1:
    case 2:
        cout << "\nVeiculo terrestre: ";
        switch(valor){
            case 1:
                cout << "Carro";
                break;
            case 2:
                cout << "Moto";
                break;
        }
        break;
    case 3:   
    case 4:
        cout << "\nVeiculo aquatico: ";
        switch(valor){
            case 3:
                cout << "Barco";
                break;
            case 4:
                cout << "Lancha";
                break;
        }
        break;
    default:
        cout << "\nNenhum veiculo selecionado";
        break;
    }

    return 0;
}