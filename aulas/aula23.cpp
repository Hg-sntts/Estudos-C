#include <iostream>
using namespace std;
//Omissão de argumentos e argumentos padrão
void contagem(int n1, int n2=0);

int main()
{
    contagem(47);

    return 0;   
}

void contagem(int n1, int n2)
{
    cout << n2 << " - ";
    if(n1>n2)
    {
        contagem(n1, ++n2);
    }
}