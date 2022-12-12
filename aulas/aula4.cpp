#include <iostream>
using namespace std;

int n1, n2;

int main(){

    int n3, n4;
    int result, result2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    result = n1/n2;
    result2 = n1%n2;
    
    cout << "\nDivisao: " << result << "\n";
    cout << "Resto:   " << result2 << "\n\n";

    return 0;
}