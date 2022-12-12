#include <iostream>
using namespace std;
//enum
int main()
{
    enum sacola{uva, banana, melancia, pera, tangerina};
    sacola frutas;

    frutas = melancia;

    cout << frutas;

    return 0;
}