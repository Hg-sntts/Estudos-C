#include <iostream>
using namespace std;

int a=1, b=2, c=a+b;

void fibonacci(int cont=10);

int main()
{
    cout << a << " "<< b << " ";

    fibonacci();

    return 0;
}

void fibonacci(int cont)
{
    if(cont>0)
    {
        cout << c << " ";
        a=b;
        b=c;
        c=a+b;
        fibonacci(--cont);
    }
    
}