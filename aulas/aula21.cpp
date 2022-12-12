#include <iostream>
using namespace std;
//Sobrecarda de funções
void soma();
void soma(int n1, int n2);

int main()
{
    soma();
    soma(20, 30);
    return 0;
}

void soma()
{
    int n1,n2,re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " e igual a: " << re << endl;
}

void soma(int n1, int n2)
{
    int re;
    re = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " e igual a: " << re;
}