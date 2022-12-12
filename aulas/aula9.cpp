#include <iostream>
using namespace std;
// NOT, OR e AND


int main(){

    //AND, OR
    /*int num;
    num = 7;
    
    if( !((num > 2 && num < 7) || (num > 9 && num < 15) || (num > 15 && num < 20))){
        cout << "\nValor aceito\n";
    } else {
        cout << "\nNao aceito\n";
    }*/

    //NOT
    int sol;
    sol = 1;

    if(!sol){
        cout << "\nEsta ensolarado, vou a praia!\n";
    } else {
        cout << "\nEsta nublado, vou ao cinema!\n";
    }

    return 0;
}