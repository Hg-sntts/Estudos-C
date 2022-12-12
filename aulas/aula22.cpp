#include <iostream>
using namespace std;
//Omissão de argumentos e argumentos padrão
void impressao(string txt="Vazio");

int main()
{
    impressao();
    return 0;   
}

void impressao(string txt)
{
    cout << endl << txt << endl;
}