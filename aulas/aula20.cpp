//=-=-=-=-=-=-=-=-=-=-=- Funções -==--=-==-=--=-==-=-=-//
#include <iostream>
using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void percorrer(string array[5]);

int main(){

    string veiculos[5] = {"carro", "moto", "aviao", "bicicleta", "lancha"};

    texto();
    soma(15, 10);
    cout << soma2(20, 20) << endl;
    percorrer(veiculos);

    return 0;
}

void texto(){
    cout << "Ola mundo!\n";
}

void soma(int n1, int n2){
    cout << "Soma dos valores: " << n1+n2 << endl;
}

int soma2(int n1, int n2){
    return n1+n2;
}

void percorrer(string array[]){
    for(int i = 0; i <= sizeof(array); i++){
        cout << array[i] << endl;
    }
}