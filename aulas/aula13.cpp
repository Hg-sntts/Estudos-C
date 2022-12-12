#include <iostream>
using namespace std;
// break

int main(){

    int cont = 0;

    while(cont < 1000){
        cont++;
        cout << "♥" << "\n";
        if(cont == 500){
            break;
        } 
    }

    return 0;
}