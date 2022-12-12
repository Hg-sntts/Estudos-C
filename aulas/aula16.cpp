#include <iostream>
using namespace std;
// Arrays / Vetores

int main(){

    int x;
    int array[5] = {7,25,65,45,48};

    for (x=0;x<sizeof(array)/4;x++)
    {
        cout << array[x] << " ";
    }

    return 0;
}