#include <iostream>
using namespace std;

int fatorial(int cont=5);

int main()
{
    cout << fatorial(10);
    return 0;
}

int fatorial(int cont)
{
    if(cont == 0)
    {
        return 1;
    }
    return cont * fatorial(cont-1);
    
}